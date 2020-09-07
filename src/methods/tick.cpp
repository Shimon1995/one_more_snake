#include "model_components/mod_comp.h"
#include "../display.h"
#include "../enums/direction.h"
void Display::tick() {
  passing_through(this->s.head, this->display_height, this->display_with);
  if (this->s.head.x == this->food_point.x && this->s.head.y == this->food_point.y) {
    this->eating_fruit();
  }
  tail_following(this->s);
  switch_direction(this->s);
}