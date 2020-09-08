#include <unistd.h>
#include <ncurses.h>
#include "../display.h"
#include "../enums/direction.h"
#include "../structs/snake.h"

Display::Display() {
  this->start_game = false;
  this->game_over = false;
  
  initscr();
  curs_set(0);
  noecho();

  getmaxyx(stdscr, this->display_with ,this->display_height);
  this->score = 0;
  this->s = {
    head: { x: display_with / 2, y: display_height / 2 },
    tail: {},
    max_lenght: 15,
    health: 3,
    d: Direction::UP,
  };

  this->generate_food();

  this->main_menu();

  if (this->start_game) {
    this->display_height /= 2;
    do {
      clear();
      this->display();
      this->tick();
      this->detect_hit_direction();
      refresh();
      usleep(90000);
    } while (!game_over);
  }

  endwin();
}