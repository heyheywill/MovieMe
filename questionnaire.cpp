#include "questionnaire.hpp"

Questionnaire::Questionnaire() {
	
	questions = {"What is your favorite movie?", "What is your favorite movie genre?", "Who is your favorite actor?"};
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
