#pragma once
#include <vector>
#include "point.h"
#include "../enums/direction.h"
using std::vector;
struct Snake {
  point head;
  vector<point> tail;
  int max_lenght;
  int health;
  Direction d;
};