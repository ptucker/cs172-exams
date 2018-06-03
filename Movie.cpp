//I affirm that all code given below was written solely by me,
//Allysa, and that any help I received adhered
//to the rules stated for this exam.


// Project Name: Exam1
// Name: Allysa Sewell
// Date: 5/31/18
// Class: CS 172

#include "Movie.h"

//constructs a movie object with default values
Movie::Movie()
{
  title = "The Sound of Music";
  genre = "Comedy";
  showTime = 9;
}

//constructs a movie object with the specified values
Movie::Movie(string Title, string Genre, int ShowTime)
{
  title = Title;
  genre = Genre;
  if (ShowTime < 25 && ShowTime > -1)
  showTime = ShowTime;
}

//accessor function for title
string Movie::GetTitle()
{
  return title;
}

//accessor function for genre
string Movie::GetGenre()
{
  return genre;
}

//accessor function for showTime
int Movie::GetShowtime()
{
  return showTime;
}