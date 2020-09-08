#pragma once
#include "structs/snake.h"
#include "structs/point.h"
#include "enums/direction.h"
class Display {
private:
  bool start_game;
  bool game_over;
  int display_with;
  int display_height;
  Snake s;
  point food_point;
  int score;
  point point_to_follow();
  void generate_food();
  void eating_fruit();
  void expand_snake(point new_tail_point);
  void detect_hit_direction();
  void tick();
  void display();
  void main_menu();
  void pause();
  void end_game();
public:
  Display();
};