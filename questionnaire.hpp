#ifndef __QUESTIONNAIRE_HPP__
#define __QUESTIONNAIRE_HPP__

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Questionnaire {

	private:
		vector<string> questions;
		vector<string> answers;

	public:
		Questionnaire();
		string getFavoriteActor();
		string getFavoriteGenre();
		string getFavoriteMovie();
		void presentQuestions();
		void presentAnswers();
};



#endif
