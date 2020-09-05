#include "../../structs/point.h"
void passing_through(point& head, int display_height, int display_with) {
  if (head.x >= display_with) {
    head.x = 1;
  } else if (head.x <= 0) {
    head.x = display_with - 1;
  }
  if (head.y >= display_height) {
    head.y = 1;
  } else if (head.y <= 0) {
    head.y = display_height - 1; 
  }
}