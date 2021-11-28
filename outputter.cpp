#include "outputter.hpp"

void Outputter::outputByGenre(vector<Movie> myList) {
	cout << endl;
	cout << "Your Reccomendations" << endl;
	cout << endl;	
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

void Outputter::outputByActor(vector<Movie> myList) {
	cout << endl;
	cout << "Your Reccomendations" << endl;
	cout << endl;
	for(int i = 0; i < myList.size(); ++i) {
		cout << "TITLE: " << myList.at(i).title << endl;
		cout << "Actors: ";
		for(int j =0; j < myList.at(i).actors.size(); ++j) {
			if(j < myList.at(i).actors.size()-1 ) {
				cout << myList.at(i).actors.at(j) << ", ";	
			}
			else {
				cout << myList.at(i).actors.at(j) << endl;
			}
		}
		cout << endl;
		cout << endl;
	
	}
}


void Outputter::outputByRating(vector<Movie> myList) {
	cout << endl;
	cout << "Your Reccomendations" << endl;
	cout << endl;	
	for(int i = 0; i < myList.size(); ++i) {
		cout << "TITLE: " << myList.at(i).title << endl;
		cout << "Rating: " << myList.at(i).rating << endl;
		cout << endl;
	}
		cout << endl;
		cout << endl;

}
