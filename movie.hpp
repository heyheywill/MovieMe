#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

class Movie 
{
private:
public:
    int rank;
    string title;
    vector<string> genre;
    string description;
    vector<string> director;
    vector<string> actors;
    int year;
    int duration;
    string certificate;
    double rating;
    Movie(){
    }
};
#endif
