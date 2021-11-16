#include "byGenre.hpp"
#include <vector>
#include <string>

using namespace std;

vector<Movie> byGenre::getPreferences(vector<Movie> movieList, vector<string> answers) {
	vector<Movie> returnVec;
	
	string myGenre = answers.at(1);
	for(int i =0; i < movieList.size(); ++i) {
		for(int j =0; j < movieList.at(i).genre.size(); ++j) {
			if(myGenre == movieList.at(i).genre.at(j)) {
				returnVec.push_back(movieList.at(i));
			}
		}
	}
	return returnVec;
}

byGenre::byGenre(vector<Movie> data, vector<string> answers) {
	dataBase = data;
	userAns = answers;
}
