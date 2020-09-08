#include <ncurses.h>
#include <cstring>
#include "../display.h"

void Display::main_menu() {
  bool menu = true;
  int row = this->display_with;
  int col = this->display_height;
  int choice = 0;

  const char *msgs[2] = {
    "PLAY",
    "QUIT"
  };

  while (menu) {
    clear();
    for (size_t i = 0; i < 2; ++i) {
      move(row / 2 + i, (col - strlen(msgs[i])) / 2 - 4 );
      if ( i == choice )
      addch('>');
      else          
      addch(' ');
      printw(" %s\n", msgs[i]);
    }

    switch ( getch() ) {
    case 65:
    case 'k':
    case 'l':
      if ( choice >= 1 )
      choice--; 
      break;
    case 66:
    case 'j':
    case 'h':
      if ( choice < 3 )
      choice++;
      break;
    case 10:
      if (choice == 1) {
        menu = false;
        clear();
        mvprintw(row / 2, (col - 3) / 2, "BYE");
        getch();
      } else if (choice == 0) {
        this->start_game = true;
        menu = false;
        break;
      }
    }
  }
}