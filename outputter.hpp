#ifndef __OUTPUTTER_HPP__
#define __OUTPUTTER_HPP__
#include <vector>
#include <iostream>
#include "movie.hpp"
using namespace std;

class Outputter : public Movie {

public:
	void outputByGenre(vector<Movie>);
	void outputByActor(vector<Movie>);

};

#endif
