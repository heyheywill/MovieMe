#ifndef __BYGENRE_HPP__
#define __BYGENRE_HPP__
#include <vector>
#include "movieList.hpp"
#include "sortLists.hpp"
class byGenre : public SortLists {
	private:	
		
	public:
		byGenre(vector<Movie>, vector<string>);
		vector<Movie> getPreferences(vector<Movie> movieList, vector<string> answers);
		vector<Movie> dataBase;
		vector<string> userAns;
};

#endif
