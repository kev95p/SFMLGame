OBJS = objs/main.o objs/prueba.o objs/game.o objs/player.o
SFML = -lsfml-graphics -lsfml-window -lsfml-system
BINARY = game


out: $(OBJS)
	g++ -o $(BINARY) $(OBJS) $(SFML)

objs/main.o: src/main.cpp 
	g++ -o objs/main.o -c  src/main.cpp

objs/prueba.o: src/prueba.cpp includes/prueba.h
	g++ -o objs/prueba.o -c  src/prueba.cpp

objs/game.o: src/game.cpp includes/game.h
	g++ -o objs/game.o -c src/game.cpp

objs/player.o: src/player.cpp includes/player.h
	g++ -o objs/player.o -c src/player.cpp

clean: 
	rm -f $(BINARY) $(OBJS)