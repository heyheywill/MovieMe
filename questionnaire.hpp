#ifndef __QUESTIONNAIRE_HPP__
#define __QUESTIONNAIRE_HPP__

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Questionnaire {

	private:
	

	public:
		vector<string> questions;
		vector<string> answers;
		string getFavoriteActor();
		string getFavoriteGenre();
		string getFavoriteMovie();
};



#endif
