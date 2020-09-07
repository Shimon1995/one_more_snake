#include <ncurses.h>
#include <cstring>
#include "../display.h"

void Display::main_menu() {
  bool menu = true;
  int row = this->display_with;
  int col = this->display_height;
  int choice = 0;

  const char *msgs[4] = {
    "PLAY",
    "OPTIONS",
    "QUIT"
  };

  while (menu) {
    clear();
    for (size_t i = 0; i < 3; ++i) {
      move(row / 2 + i, (col - strlen(msgs[i])) / 2 - 4 );
      if ( i == choice )
      addch('>');
      else          
      addch(' ');
      printw("%s\n", msgs[i]);
    }

    switch ( getch() ) {
    case KEY_UP:
    case 'k':
    case 'l':
      if ( choice >= 1 )
      choice--; 
      break;
    case KEY_DOWN:
    case 'j':
    case 'h':
      if ( choice < 3 )
      choice++;
      break;
    case 10:
      if (choice == 2) {
        menu = false;
      } else if (choice == 1) {
        menu = false;
        clear();
        printw("Comming soon");
      } else if (choice == 0) {
        this->start_game = true;
        menu = false;
        break;
      }
    }
  }

  getch(); 
}