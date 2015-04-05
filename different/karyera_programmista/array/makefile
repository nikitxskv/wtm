OBJ = main.o 5sz.o
p: $(OBJ)
	g++ -o p main.o 5sz.o
main.o : main.cpp fun.h
	g++ -c  main.cpp
5sz.o : 5sz.cpp  fun.h
	g++ -c 5sz.cpp
reset : main.cpp
	rm -f $(OBJ) p

