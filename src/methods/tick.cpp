#include <ncurses.h>
#include "model_components/mod_comp.h"
#include "../display.h"
#include "../enums/direction.h"
void Display::tick() {
  if (this->game_over) {
    clear();
    mvprintw(this->display_with / 2, (this->display_height - 3) / 2, "BYE");
    getch();
  }

  passing_through(this->s.head, this->display_height, this->display_with);
  if (this->s.head.x == this->food_point.x && this->s.head.y == this->food_point.y) {
    this->eating_fruit();
  }
  tail_following(this->s);
  switch_direction(this->s);

  for (auto link : this->s.tail)
  if (this->s.head.x == link.x && this->s.head.y == link.y) {
    this->s.health--;
    if (this->s.tail.size() > 5 && this->score > 5) {
      this->score -= 5;
      for (size_t i; i <= 5; i++)
      this->s.tail.pop_back();
    } else {
      this->game_over = true;
    }
  }

  if (this->score > 20)
  this->end_game();

  if (this->s.health <= 0)
  this->end_game();
}