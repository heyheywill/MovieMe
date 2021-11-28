#ifndef __QUESTIONNAIRE_HPP__
#define __QUESTIONNAIRE_HPP__

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Questionnaire {

	private:
		vector<string> questions;
		vector<string> answers; // use answers vector to find matches between movies. Keep in mind that strings may not perfectly match up, so we can possibly implement a way to see if a substring matches. (I.e if user has entered 'romance', we should still recommend 'Romance' and 'Rom/com' since the substr 'rom' is present in both strings)

	public:
		Questionnaire();
		string getFavoriteActor();
		string getFavoriteGenre();
		string getFavoriteMovie();
		vector<string> returnAnswers();
		void presentQuestions();
		void presentAnswers();
		void pushBackAnswer(string);
		string returnFirstRecc();
};



#endif
