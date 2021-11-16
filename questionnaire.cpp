#include "questionnaire.hpp"

Questionnaire::Questionnaire() {
	
	questions = {"What is your favorite movie? (i.e '21 Jump Street')", "What is your favorite movie genre? ('Romance', 'Comedy', 'Sci-Fi', 'Horror', 'Action')", "Who is your favorite actor? ('Tom Cruise', 'Ali Shaikh', 'Abdelrahim Hentabli')"};
	answers = {};
	
}

void Questionnaire::presentQuestions() {
	for(unsigned int i = 0; i < questions.size(); ++i) {
		string answer;
		cout << questions.at(i) << endl;
		getline(cin, answer);
		answers.push_back(answer);
	}
	cout << endl;
}

void Questionnaire::presentAnswers() {
	
	for(unsigned int i = 0; i < answers.size(); ++i) {
		
		cout << questions.at(i) << endl;
		cout << "ANSWER: " << answers.at(i) << endl;
		cout << endl;
	
	}
}

string Questionnaire::getFavoriteMovie() {
	return answers.at(0);	
}

string Questionnaire::getFavoriteGenre() {
	return answers.at(1);
}


string Questionnaire::getFavoriteActor() {
	return answers.at(2);
}

vector<string> Questionnaire::returnAnswers() {
	return answers;
}
