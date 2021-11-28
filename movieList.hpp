#ifndef __MOVIELIST_HPP_
#define __MOVIELIST_HPP_

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <iomanip>
#include "movie.hpp"

using namespace std;

class MovieList : public Movie{
   public:
	vector<Movie> movieList;
   public:
	void database(string str);
};
#endif
