//I affirm that all code given below was written solely by me,
//Allysa, and that any help I received adhered
//to the rules stated for this exam.


// Project Name: Exam1
// Name: Allysa Sewell
// Date: 5/31/18
// Class: CS 172


#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;

class Movie
{
public:
  Movie();
  Movie(string Title, string Genre, int ShowTime);
  string GetTitle();
  string GetGenre();
  int GetShowtime();
private:
  string title;
  string genre;
  int showTime;
};

#endif