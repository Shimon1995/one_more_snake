#include "../display.h"
#include "../structs/point.h"
void Display::expand_snake(point new_tail_point) {
  if (this->s.tail.size() <= this->s.max_lenght)
  this->s.tail.push_back(new_tail_point);
}