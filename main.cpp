#include <iostream>
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

int main() {

	MovieList testing;
	testing.database("IMDBtop1000.csv");
	cout << testing.movieList.at(0).title << " directed by " << testing.movieList.at(0).director.at(0) << endl;
	cout << testing.movieList.at(999).title << " directed by " << testing.movieList.at(999).director.at(0) <<  endl;

}
