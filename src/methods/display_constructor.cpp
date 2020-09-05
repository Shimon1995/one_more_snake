#include "../display.h"
#include "../enums/direction.h"
#include "../structs/snake.h"
Display::Display(int height, int with) {
  this->display_height = height;
  this->display_with = with;
  this->s = {
    head: { x: display_with / 2, y: display_height / 2 },
    tail: {},
    max_lenght: 15,
    d: Direction::UP,
  };
  this->generate_food();
}