//I affirm that all code given below was written solely by me,
//Allysa, and that any help I received adhered
//to the rules stated for this exam.


// Project Name: Exam1
// Name: Allysa Sewell
// Date: 5/31/18
// Class: CS 172

#include "Theater.h"


//makes Theater object with specified name and phone number
Theater::Theater(string Name, string Phone)
{
  numberOfMovies = 0;
  cokePrice = 5;
  popcornPrice = 5;
 
}

//adds movie object to movieListing array
void Theater::AddMovie(Movie& Movie)
{
	movies[numberOfMovies++] = Movie;
}

// returns title of movie playing at the specified hour
string Theater::GetMovieForHour(int hour)
{
  string title;
  if (hour < 25 && hour > -1) //checks if input is vali
  {
    for (int i = 0; i < numberOfMovies; i++)
    {
      if (movies[i].GetShowtime() >= hour)
      {
        title = movies[i].GetTitle();
        return title;
      }
    }

  }
  return title;
}

// returns the time a movie of the specified genre is playing
int Theater::GetShowTimeForGenre(string Genre)
{
  int time = -1;
  for (int i = 0; i < numberOfMovies; i++)
  {
    if (movies[i].GetGenre() == Genre)
    {
      time = movies[i].GetShowtime();
      return time;
    }
  }
}



//accessor function for popcorn price
int Theater::GetPopcornPrice()
{
  return popcornPrice;
}

//accessor function for coke price
int Theater::GetCokePrice()
{
  return cokePrice;
}