#include <unistd.h>
#include <ncurses.h>
#include "../display.h"
#include "../enums/direction.h"
#include "../structs/snake.h"

Display::Display() {
  initscr();
  curs_set(0);
  noecho();

  getmaxyx(stdscr, this->display_with ,this->display_height);
  this->s = {
    head: { x: display_with / 2, y: display_height / 2 },
    tail: {},
    max_lenght: 15,
    d: Direction::UP,
  };

  this->generate_food();

  while (true) {
    clear();
    this->display();
    this->tick();
    this->detect_hit_direction();
    refresh();
    usleep(90000);
  }

  endwin();
}