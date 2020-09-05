#include <stdlib.h>
#include "../display.h"
#include "../structs/point.h"
void Display::generate_food() {
  int x = rand() % this->display_with;
  int y = rand() % this->display_height;
  this->food_point = { x, y };
}