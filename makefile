all:
	g++ Main.cpp fmodf.c get_time.cpp -std=c++17 -lsfml-graphics -lsfml-window -lsfml-system -lGL -lGLU -lglut -o FractalClock


clean:
	rm FractalClock
