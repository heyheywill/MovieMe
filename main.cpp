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

	MovieList movieList;
	movieList.database("test.csv");
	cout << movieList.row2.at(0).title << endl;
	cout << movieList.row2.at(999).title << endl;

}
