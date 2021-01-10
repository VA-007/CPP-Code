#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class Movies
{
private:
  vector<Movie> movies;

public:
  Movies();

  bool add_movie(string name, string rating, int watched);

  bool increment_watched(string name);

  void display() const;

  ~Movies();
};

#endif // _MOVIES_H_