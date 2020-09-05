#include <iostream>
#include <ncurses>
#include "../display.h"
#include "../enums/direction.h"
void Display::display() {
  using namespace std;
  for (auto y = 0; y < this->display_height; y++) {
    for (auto x = 0; x <= this->display_with; x++) {
      bool show_tail = false;
      for (auto point : this->s.tail) {
        if (point.x == x && point.y == y)
        show_tail = true;
      }
      if (this->s.head.y == y && this->s.head.x == x) {
        cout << 'h';
      } else if (this->food_point.x == x && this->food_point.y == y) {
        cout << 'f';
      } else if (show_tail) {
        cout << 't';
      } else {
        cout << ' ';
      }
    }
    cout << endl;
  }
  cout << "Score: " << score << endl;
  cout << "Head x: " << this->s.head.x << "; y: " << this->s.head.y << endl;
  if (this->s.tail.size() > 0)
  for (auto t : this->s.tail) {
    cout << "Tail x: " << t.x << "; y: " << t.y << endl;
  }
}