#include <ncurses.h>
#include <unistd.h>

constexpr int delay = 30000;

int main(int argc, char *argv[]) {
 int x = 0, y = 0;

 initscr();
 noecho();
 curs_set(FALSE);

 while(1) {
 clear(); // Clear the screen of all
 // previously-printed characters
 mvprintw(y, x, "o"); // Print our "ball" at the current xy position
 refresh();

  sleep(1);
//  usleep(delay); // Shorter delay between movements
 x++; // Advance the ball to the right
 }

 endwin();
}