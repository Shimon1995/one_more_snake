#include <ncurses.h>
#include <cstring>
#include "../display.h"
void Display::end_game() {
  char* print;
  if (this->score > 20) {
    print = "CONGRATULATIONS!";
  } else {
    print = "GAME OVER";
  };
  this->game_over = true;
  clear();
  mvprintw(this->display_with / 2, (this->display_height - strlen(print)), "%s", print);
  getch();
}