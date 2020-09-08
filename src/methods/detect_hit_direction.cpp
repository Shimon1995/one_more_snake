#include <conio.h>
#include "../display.h"
#include "../enums/direction.h"
void Display::detect_hit_direction() {
  // keypad(stdscr, true);
  if ( kbhit() )
  switch ( getch() ) {
  case 68:
  case 'h':
    if (this->s.d != Direction::DOWN || this->s.tail.size() ==  0)
    this->s.d = Direction::UP;
    break;
  case 67:
  case 'l':
    if (this->s.d != Direction::UP || this->s.tail.size() == 0)
    this->s.d = Direction::DOWN;
    break;
  case 66:
  case 'j':
    if (this->s.d != Direction::LEFT || this->s.tail.size() == 0)
    this->s.d = Direction::RIGHT;
    break;
  case 65:
  case 'k':
    if (this->s.d != Direction::RIGHT || this->s.tail.size() == 0)
    this->s.d = Direction::LEFT;
    break;
  case 'e':
    this->eating_fruit();
    break;
  case 'q':
    this->game_over = true;
    break;
  case 'd':
    this->s.health--;
    break;
  case 32:
    this->pause();
  }
}