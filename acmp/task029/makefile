OBJ = p1.o
p: $(OBJ)
	g++ -o p p1.o 
p1.o : p1.cpp 
	g++ -c  p1.cpp
reset : p1.cpp
	rm -f $(OBJ) p