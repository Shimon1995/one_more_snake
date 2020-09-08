#include <ncurses.h>
#include <cstring>
#include "../display.h"
void Display::pause() {
  char* print = "PAUSE";
  clear();
  mvprintw(this->display_with / 2, this->display_height - strlen(print) / 2, "%s", print);
  getch();
}