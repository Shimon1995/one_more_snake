#include "../display.h"
#include "../structs/point.h"
point Display::point_to_follow() {
  // if (this->s.tail.size() == 1) {
  //   return this->s.head;
  // } else if (this->s.tail.size() > 1) {
  //   return this->s.tail[this->s.tail.size() - 1];
  // }
  return { 10, 10 };
}