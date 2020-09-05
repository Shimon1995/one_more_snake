#include "../../structs/snake.h"
#include "../../enums/direction.h"
void switch_direction(Snake& s) {
  switch (s.d) {
  case Direction::UP:
    s.head.y--;
    break;
  case Direction::RIGHT:
    s.head.x++;
    break;
  case Direction::LEFT:
    s.head.x--;
    break;
  case Direction::DOWN:
    s.head.y++;
    break;
  }
}