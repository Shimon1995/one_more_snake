#pragma once
#include "structs/snake.h"
#include "structs/point.h"
#include "enums/direction.h"
class Display {
private:
  int display_with;
  int display_height;
  Snake s;
  point food_point;
  int score;
  point point_to_follow();
  void generate_food();
  void eating_fruit();
  void expand_snake(point new_tail_point);
public:
  Display(int height, int width);
  void tick();
  void display();
  void detect_hit_direction(char c);
  //maybe isn't gonna be used
  // void change_snake_direction(Direction d);
};