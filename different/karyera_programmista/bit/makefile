OBJ = main.o 1vstavka.o print.o 3sosed.o 6smena.o 7find.o
p: $(OBJ)
	g++ -o p main.o 1vstavka.o print.o 3sosed.o 6smena.o 7find.o
main.o : main.cpp fun.h
	g++ -c  main.cpp
1vstavka.o : 1vstavka.cpp  fun.h
	g++ -c 1vstavka.cpp
print.o : print.cpp  fun.h
	g++ -c print.cpp
3sosed.o : 3sosed.cpp  fun.h
	g++ -c 3sosed.cpp
6smena.o : 6smena.cpp  fun.h
	g++ -c 6smena.cpp
7find.o : 7find.cpp fun.h
	g++ -c 7find.cpp
reset : main.cpp
	rm -f $(OBJ) p

