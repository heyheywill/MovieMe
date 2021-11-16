#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <iomanip>
#include "movieList.hpp"
#include "movie.hpp"
#include "questionnaire.hpp"
#include "sortLists.hpp"
#include "byGenre.hpp"
#include "byActor.hpp"
#include "csvName.hpp"
using namespace std;
int main() {

	
	Questionnaire testQues;
	testQues.presentQuestions();
	testQues.presentAnswers();
	


	MovieList testing;
	testing.database(csvName::getInstance().String());
	cout << testing.movieList.at(0).title << " directed by " << testing.movieList.at(0).director.at(0) << endl;
	cout << testing.movieList.at(999).title << " directed by " << testing.movieList.at(999).director.at(0) <<  endl;
	
	vector<string> myvec = testQues.returnAnswers();
	byGenre test1(testing.movieList, myvec);
	vector<Movie> myList = test1.getPreferences(test1.dataBase, test1.userAns);



	for(int i = 0; i < myList.size(); ++i) {
		cout << "TITLE: " << myList.at(i).title << endl;
		cout << "Genres: ";
		for(int j =0; j < myList.at(i).genre.size(); ++j) {
			if(j < myList.at(i).genre.size()-1 ) {
				cout << myList.at(i).genre.at(j) << ", ";	
			}
			else {
				cout << myList.at(i).genre.at(j) << endl;
			}
		}
		cout << endl;
		cout << endl;
	
	}

	cout << "==================================================================================" << endl;	

	vector<string> myvec2 = testQues.returnAnswers();
	byActor test2(testing.movieList, myvec2);
	vector<Movie> myList2  = test2.getPreferences(test2.dataBase, test2.userAns);

	
	for(int i = 0; i < myList2.size(); ++i) {
		cout << "TITLE: " << myList2.at(i).title << endl;
		cout << "Actors: ";
		for(int j =0; j < myList2.at(i).actors.size(); ++j) {
			if(j < myList2.at(i).actors.size()-1 ) {
				cout << myList2.at(i).actors.at(j) << ", ";	
			}
			else {
				cout << myList2.at(i).actors.at(j) << endl;
			}
		}
		cout << endl;
		cout << endl;
	
	}
}
