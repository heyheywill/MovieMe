#include "byActor.hpp"
#include "byGenre.hpp"
#include "movie.hpp"
#include "csvName.hpp"
#include "movieList.hpp"
#include "sortLists.hpp"
#include "gtest/gtest.h"
#include "questionnaire.hpp"
#include <fstream>
#include <iostream>
TEST(questionnaireTest, checkLoadedQuestions) {
	Questionnaire test;
	
	ifstream fin;
	fin.open("romanceInput.txt");
	string input;
	
	for(int i = 0; i < 3; ++i) {
		getline(fin, input);
		test.pushBackAnswer(input);
	}

	EXPECT_EQ("21 Jump Street", test.getFavoriteMovie());
	EXPECT_EQ("Romance", test.getFavoriteGenre());
	EXPECT_EQ("Tom Cruise", test.getFavoriteActor());
}

TEST(byGenreTest, checkIfReccRomance) {
	Questionnaire testQues;

	ifstream fin;
	fin.open("romanceInput.txt");
	string input;

	for(int i = 0; i < 3; ++i) {
		getline(fin, input);
		testQues.pushBackAnswer(input);		
	}	
	
	MovieList testing;	
	testing.database(csvName::getInstance().String());

	vector<string> myvec = testQues.returnAnswers();
	byGenre test1(testing.movieList, myvec);
	vector<Movie> myList = test1.getPreferences(test1.dataBase, test1.userAns);
	
	EXPECT_EQ("Forrest Gump", myList.at(0).title);
	EXPECT_EQ("La vita è bella", myList.at(1).title);
}

TEST(byGenreTest, howManyReccs) {

	Questionnaire testQues;

	ifstream fin;
	fin.open("romanceInput.txt");
	string input;

	for(int i = 0; i < 3; ++i) {
		getline(fin, input);
		testQues.pushBackAnswer(input);		
	}	
	
	MovieList testing;	
	testing.database(csvName::getInstance().String());

	vector<string> myvec = testQues.returnAnswers();
	byGenre test1(testing.movieList, myvec);
	vector<Movie> myList = test1.getPreferences(test1.dataBase, test1.userAns);
	
	EXPECT_EQ(125, myList.size());
}

TEST(byActorTest, checkIfReccSpecificActor) {
	
	Questionnaire testQues;

	ifstream fin;
	fin.open("romanceInput.txt");
	string input;

	for(int i = 0; i < 3; ++i) {
		getline(fin, input);
		testQues.pushBackAnswer(input);		
	}	
	
	MovieList testing;	
	testing.database(csvName::getInstance().String());

	vector<string> myvec = testQues.returnAnswers();
	byActor test1(testing.movieList, myvec);
	vector<Movie> myList = test1.getPreferences(test1.dataBase, test1.userAns);

	EXPECT_EQ("Magnolia", myList.at(0).title);
	EXPECT_EQ("Minority Report", myList.at(myList.size() - 1).title);

}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
