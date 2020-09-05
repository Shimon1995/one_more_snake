#include "../display.h"
void Display::eating_fruit() {
  this->score++;
  auto p = this->point_to_follow();
  this->expand_snake(p);
  this->generate_food();
}