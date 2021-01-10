#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
using namespace std;

class Movie
{
private:
  string name;
  string rating;
  int watched;

public:
  Movie(string name, string rating, int watched);

  Movie(const Movie &source);

  void set_name(string name)
  {
    this->name = name;
  }

  string get_name() const
  {
    return name;
  }

  void set_rating(string rating)
  {
    this->rating = rating;
  }

  string get_rating() const
  {
    return rating;
  }

  void set_watched(int watched)
  {
    this->watched = watched;
  }

  int get_watched() const
  {
    return watched;
  }

  void increment_watched()
  {
    watched++;
  }

  void display() const;

  ~Movie();
};

#endif // _MOVIE_H_