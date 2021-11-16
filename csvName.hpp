#ifndef __CSVNAME_HPP__
#define __CSVNAME_HPP__

#include <iostream>
#include <string>
using std::string;
class csvName{
   public:
	csvName(const csvName&) = delete;
	
	static csvName& getInstance()
	{
	   static csvName instance;
	   return instance;
	
	}

	string String() {return csvFile;}

   private:
	csvName(){}

	string csvFile = "IMDBtop1000.csv";
};

#endif
