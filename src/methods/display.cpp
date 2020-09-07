#include <ncurses.h>
#include "../display.h"
#include "../enums/direction.h"
void Display::display() {
  mvprintw(this->s.head.x, this->s.head.y, "s");
  for (auto link : this->s.tail) {
    mvprintw(link.x, link.y, "t");
  }

  mvprintw(this->food_point.x, this->food_point.y, "f");

  mvprintw(this->display_with - 1, 0, "Score: %d", this->score);
}