#ifndef __MOVIELIST_HPP_
#define __MOVIELIST_HPP_

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <iomanip>
#include "movie.hpp"

using namespace std;

class MovieList : public Movie{
   public:
	vector<Movie> movieList;
   public:
	void database(string str){
   	 int count = 0;
   	 Movie movieObject;
   	 ifstream movieRow;
   	 movieRow.open(str);
    
    while(movieRow >> std::ws){
        string csvElement;
        if(count == 9){
            count = 0;
            movieList.push_back(movieObject);
            movieObject.genre.clear();
            movieObject.actors.clear();
        }
        if(count == 0){
            getline(movieRow, csvElement, ',');
            if(csvElement.empty()){
                break;
            }
            movieObject.rank = (stoi(csvElement));
        }
        else if(count == 1){
            if(movieRow.peek() == '"'){
                movieRow >> std::quoted(csvElement);
                string discard;
                getline(movieRow, discard, ',');
                movieObject.title = csvElement;
            }
            else{
                getline(movieRow, csvElement, ',');
                movieObject.title = csvElement;
            }
        }
        else if(count == 2){
            if(movieRow.peek() == '"'){
                movieRow >> std::quoted(csvElement);
                string discard;
                getline(movieRow, discard, ',');
                string word = "";
                for(auto x: csvElement)
                {
                    if(x == ','){
                        if(word.at(0) == ' '){
                            word = word.substr(1, word.size());
                        }
                        movieObject.genre.push_back(word);
                        word = "";
                    }
                    else{
                        word = word + x;
                    }
                }
                if(word.at(0) == ' '){
                    word = word.substr(1, word.size());
                }
                movieObject.genre.push_back(word);
            }
            else{
                getline(movieRow, csvElement, ',');
                movieObject.genre.push_back(csvElement);
            }
        }
        else if(count == 3){
            if(movieRow.peek() == '"'){
                movieRow >> std::quoted(csvElement);
                string discard;
                getline(movieRow, discard, ',');
                movieObject.description = csvElement;
            }
            else{
                getline(movieRow, csvElement, ',');
                movieObject.description = csvElement;
            }
        }
        else if(count == 4){
            getline(movieRow, csvElement, ',');
            movieObject.director = csvElement;
        }
        else if(count == 5){
            if(movieRow.peek() == '"'){
                movieRow >> std::quoted(csvElement);
                string discard;
                getline(movieRow, discard, ',');
                string word2 = "";
                for(auto y: csvElement)
                {
                    if(y == ','){
                        if(word2.at(0) == ' '){
                            word2 = word2.substr(1, word2.size());
                        }
                        movieObject.actors.push_back(word2);
                        word2 = "";
                    }
                    else{
                        word2 = word2 + y;
                    }
                }
                if(word2.at(0) == ' '){
                    word2 = word2.substr(1, word2.size());
                }
                movieObject.actors.push_back(word2);
            }
            else{
                getline(movieRow, csvElement, ',');
                movieObject.actors.push_back(csvElement);
            }
        }
        else if(count == 6){
            getline(movieRow, csvElement, ',');
            movieObject.year = stoi(csvElement);
        }
        else if(count == 7){
            getline(movieRow, csvElement, ',');
            movieObject.duration = stoi(csvElement);
        }
        else{
            getline(movieRow, csvElement, '\n');
            movieObject.rating = stod(csvElement);
        }
        count++;
    }
}
};

#endif
