#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie(string name, string rating, int watched) 
    : name{name}, rating{rating}, watched{watched}
{
}

Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched}
{
}

Movie::display() const
{
  cout << "Name: " << name << "\nRating: " << rating << "\nWatch count: " << watched << endl;
}

Movie::~Movie() {}
