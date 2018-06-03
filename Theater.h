//I affirm that all code given below was written solely by me,
//Allysa, and that any help I received adhered
//to the rules stated for this exam.


// Project Name: Exam1
// Name: Allysa Sewell
// Date: 5/31/18
// Class: CS 172

#ifndef THEATER_H_
#define THEATER_H_
#include <string>
#include "Movie.h"
using namespace std;


class Theater
{
public:
  Theater(string Name, string Phone);
  void AddMovie(Movie& Movie);
  string GetMovieForHour(int hour);
  int GetShowTimeForGenre(string Genre);
  int GetPopcornPrice();
  int GetCokePrice();
private:
  Movie movies[20];
  int numberOfMovies;
  string name;
  string phone;
  int popcornPrice;
  int cokePrice;
};

#endif