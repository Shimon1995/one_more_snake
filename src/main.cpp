#include <iostream>
#include <conio.h>
#include "display.h"
int main() {
  auto d = Display(20, 20);
  while (true) {
    system("clear");
    d.display();
    while (_kbhit()) {
      char c = getch();
      d.detect_hit_direction(c);
    }
    d.tick();
    sleep(1);
  }
  return 0;
}