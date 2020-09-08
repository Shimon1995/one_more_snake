#include <ncurses.h>
#include "../display.h"
#include "../enums/direction.h"
void Display::display() {
  mvprintw(this->s.head.x, this->s.head.y, "▢");
  for (auto link : this->s.tail) {
    mvprintw(link.x, link.y, "▢");
  }

  mvprintw(this->food_point.x, this->food_point.y, "■");

  for (size_t i = 0; i <= this->display_height; ++i) {
    mvprintw(0 + i, this->display_height, "▏");
  }

  mvprintw(8, this->display_height + 36, "Controls:");
  mvprintw(10, this->display_height + 22, "↑ - up; ↓ - down; → - right; ← - left;");
  mvprintw(12, this->display_height + 22, "k - up; j - down; l - right; h - left;");
  mvprintw(14, this->display_height + 16, "q - quit the game; e - eat a fruit; d - take the damage;");

  mvprintw(18, this->display_height + 18, "Rules:");
  mvprintw(20, this->display_height + 14, " If you either lose all the hearts or collide your tail till");
  mvprintw(21, this->display_height + 14, "you have less then 5 score points, you lose.");
  mvprintw(23, this->display_height + 14, "To win the game gain more then 20 score points.");

  for (size_t i = 0; i < this->s.health; ++i)
  mvprintw(this->display_with - 2, this->display_height + 2 + i * 2, "❤");

  mvprintw(this->display_with - 1, this->display_height + 2, "Score: %d", this->score);
}