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
	testing.database("test.csv");
	cout << testing.movieList.at(0).title << endl;
	cout << testing.movieList.at(999).title << endl;

}
