#ifndef __BYRATING_HPP__
#define __BYRATING_HPP__

#include <iostream>
#include "movieList.hpp"
#include "sortLists.hpp"

class byRating : public SortLists {

private:

public:
	byRating(vector<Movie>, vector<string>);
	vector<Movie> getPreferences(vector<Movie> movieList, vector<string> answers);
	vector<Movie> dataBase;
	vector<string> userAns;

};

#endif
