#include "byActor.hpp"
#include <vector>
#include <string>

using namespace std;

vector<Movie> byActor::getPreferences(vector<Movie> movieList, vector<string> answers) {
	vector<Movie> returnVec;
	
	string myActor = answers.at(2);
	for(int i =0; i < movieList.size(); ++i) {
		for(int j =0; j < movieList.at(i).actors.size(); ++j) {
			if(myActor  == movieList.at(i).actors.at(j)) {
				returnVec.push_back(movieList.at(i));
			}
		}
	}
	return returnVec;
}

byActor::byActor(vector<Movie> data, vector<string> answers) {
	dataBase = data;
	userAns = answers;
}
