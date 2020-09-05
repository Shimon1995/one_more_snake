all:
	g++ src/{main.cpp,display.h,structs/snake.h,enums/direction.h,methods/{point_to_follow.cpp,eating_fruit.cpp,generate_food.cpp,expand_snake.cpp,detect_hit_direction.cpp,tick.cpp,display_constructor.cpp,display.cpp,change_snake_direction.cpp}} -std=c++14 -o bin/snake && ./bin/snake
