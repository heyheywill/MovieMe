#include "byRating.hpp"

#include <iostream>
#include <vector>
using namespace std;


byRating::byRating(vector<Movie> data, vector<string> answers) {
	dataBase = data;
	userAns = answers;
}

vector<Movie> byRating::getPreferences(vector<Movie> movieList, vector<string> answers) {
	vector<Movie> returnVec;

	for(int i = 0; i < movieList.size(); ++i) {
		if(movieList.at(i).rating > 8.2) {
			for(int j = 0; j < movieList.at(i).genre.size(); ++j) {
				if(movieList.at(i).genre.at(j) == answers.at(1)) {
					returnVec.push_back(movieList.at(i));
				}
			}
		}
	}
	return returnVec;
}

/*
I think a cool implementation would be to get movies that have high ratings AND are similar to the genre or actor that they like
*/
