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

using namespace std;
int main() {

	
	Questionnaire testQues;
	testQues.presentQuestions();
	testQues.presentAnswers();
	


	MovieList testing;
	testing.database("IMDBtop1000.csv");
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

}
