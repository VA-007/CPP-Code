#include <iostream>
#include "Movies.h"

using namespace std;

Movies::Movies()
{
}
Movies::~Movies()
{
}

bool Movies::add_movie(string name, string rating, int watched)
{
  for (auto &i : movies)
  {
    if (i.get_name() == name)
    {
      return false;
    }
  }

  Movie temp{name, rating, watched};
  movies.push_back(temp);
  return true;
}

bool Movies::increment_watched(string name)
{
  for (auto &i : movies)
  {
    if (i.get_name() == name)
    {
      i.increment_watched();
      return true;
    }
  }

  return false;
}

void Movies::display() const
{
  for (auto &i : movies)
  {
    i.display();
  }
}
