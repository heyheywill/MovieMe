#ifndef __BYACTOR_HPP__
#define __BYACTOR_HPP__
#include <vector>
#include "movieList.hpp"
#include "sortLists.hpp"
class byActor : public SortLists {
	private:	
		
	public:
		byActor(vector<Movie>, vector<string>);
		vector<Movie> getPreferences(vector<Movie> movieList, vector<string> answers);
		vector<Movie> dataBase;
		vector<string> userAns;
};

#endif
