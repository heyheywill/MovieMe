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
#include "outputter.hpp"
#include "byRating.hpp"
using namespace std;
int main() {

	
	Questionnaire testQues;
	testQues.presentQuestions();
	testQues.presentAnswers();
	

	MovieList watchlist;

	MovieList testing;
	testing.database(csvName::getInstance().String());
	//testing.printMovies(std::cout);
	//testing main.yml	

	cout << "Would you like to be reccomended movies via actor (1), genre (2), rating (3), or QUIT (4)" << endl;
	
	int answer = 0;

	vector<string> myvec = testQues.returnAnswers();
	byGenre test1(testing.movieList, myvec);
	vector<Movie> myList = test1.getPreferences(test1.dataBase, test1.userAns);		
	byActor list2(testing.movieList, myvec);
	vector<Movie> myActorList = list2.getPreferences(list2.dataBase, list2.userAns);
	byRating list3(testing.movieList, myvec);
	vector<Movie> myRatingList = list3.getPreferences(list3.dataBase, list3.userAns);
		

	Outputter out;	

	while(cin >> answer) {
		if(answer == 1) {
			out.outputByActor(myActorList);
			cout << "Would you like to be reccomended movies via actor (1), genre (2), rating (3), or QUIT (4)" << endl;
	
		}
		else if(answer == 2) {
			out.outputByGenre(myList);
			cout << "Would you like to be reccomended movies via actor (1), genre (2), rating (3), or QUIT (4)" << endl;
	
		}
		else if(answer == 3) {
			out.outputByRating(myRatingList);
			cout << "Would you like to be reccomended movies via actor (1), genre (2), rating (3), or QUIT (4)" << endl;
	
		}
		else if(answer == 4) {
			break;
		}
		else {
			cout << "Please enter a valid # : actor (1), genre (2), rating (3), or QUIT (4)"<< endl;
		}
	}
}
