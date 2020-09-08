#include <clocale>
#include "display.h"
int main() {
  std::setlocale(LC_ALL, "en_US.UTF-8");
  Display();
  return 0;
}