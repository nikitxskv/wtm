OBJ = main.o 1stup.o 2robot.o 3mas.o 5perestanovka.o 6skobki.o
p: $(OBJ)
	g++ -o p main.o 1stup.o 2robot.o 3mas.o 5perestanovka.o 6skobki.o
main.o : main.cpp fun.h
	g++ -c  main.cpp
1stup.o : 1stup.cpp fun.h
	g++ -c 1stup.cpp
2robot.o : 2robot.cpp fun.h
	g++ -c 2robot.cpp
3mas.o : 3mas.cpp fun.h
	g++ -c 3mas.cpp
5perestanovka.o : 5perestanovka.cpp fun.h
	g++ -c 5perestanovka.cpp
6skobki.o : 6skobki.cpp fun.h
	g++ -c 6skobki.cpp
reset : main.cpp
	rm -f $(OBJ) p

