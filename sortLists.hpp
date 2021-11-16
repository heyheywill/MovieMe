#ifndef __SORTLISTS_HPP__
#define __SORTLISTS_HPP__
#include <vector>

class SortLists : public MovieList{


	public:
		virtual vector<Movie> getPreferences(vector<Movie> movieList, vector<string> answers) = 0; 


};

#endif

