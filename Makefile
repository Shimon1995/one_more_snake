all:
	g++ src/{main.cpp,display.h,structs/snake.h,enums/direction.h,methods/{point_to_follow.cpp,eating_fruit.cpp,generate_food.cpp,expand_snake.cpp,detect_hit_direction.cpp,tick.cpp,display_constructor.cpp,display.cpp,main_menu.cpp,game_over.cpp,model_components/{passing_obstacle.cpp,switch_direction.cpp,tail_following.cpp,mod_comp.h}}} -std=c++14 -lncursesw -o bin/snake && ./bin/snake

ball:
	g++ ball.cpp -lncurses -o ball && ./ball