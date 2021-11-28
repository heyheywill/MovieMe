#include "byRating.hpp"

#include <iostream>
#include <vector>
using namespace std;


byRating::byRating(vector<Movie> data, vector<string> answers) {
	dataBase = data;
	answers = userAns;
}

vector<Movie> byRating::getPreferences(vector<Movie> movieList, vector<string> answers) {
	vector<Movie> returnVec;

	for(int i = 0; i < movieList.size(); ++i) {
		if(movieList.at(i).rating > 8.5) {
			returnVec.push_back(movieList.at(i));
		}
	}
	return returnVec;
}

/*
I think a cool implementation would be to get movies that have high ratings AND are similar to the genre or actor that they like
*/
