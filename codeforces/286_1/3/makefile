OBJ = main.o
p: $(OBJ)
	g++ -o p main.o 
main.o : main.cpp 
	g++ -c  main.cpp
reset : main.cpp
	rm -f $(OBJ) p

