#include <iostream>
#include "movie.hpp"
#include "movieList.hpp"
#include "questionnaire.hpp"



using namespace std;

int main() {

	Questionnaire ques;

	ques.presentQuestions();
	ques.presentAnswers();
}
