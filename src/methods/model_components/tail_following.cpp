#include "../../structs/snake.h"
void tail_following(Snake& s) {
  if (s.tail.size() > 0) {
    for (size_t iter = s.tail.size() - 1; iter > 0; --iter) {
      s.tail[iter] = s.tail[iter - 1];
    }
    s.tail[0] = s.head;
  }
}