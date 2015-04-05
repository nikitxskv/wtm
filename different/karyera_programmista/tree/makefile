OBJ = p1.o print.o add.o 1balance.o 3create.o 4spisok.o 5proverka.o 7predok.o 8dvd.o
p: $(OBJ)
	g++ -o p p1.o print.o add.o 1balance.o 3create.o 4spisok.o 5proverka.o 7predok.o 8dvd.o
p1.o : p1.cpp fun.h
	g++ -c  p1.cpp
print.o : print.cpp  fun.h
	g++ -c print.cpp
add.o : add.cpp fun.h
	g++ -c add.cpp
1balance.o : 1balance.cpp  fun.h
	g++ -c 1balance.cpp 
3create.o : 3create.cpp fun.h
	g++ -c 3create.cpp
4spisok.o : 4spisok.cpp fun.h
	g++ -c 4spisok.cpp
5proverka.o : 5proverka.cpp  fun.h
	g++ -c 5proverka.cpp
7predok.o : 7predok.cpp
	g++ -c 7predok.cpp
8dvd.o : 8dvd.cpp fun.h
	g++ -c 8dvd.cpp
reset : p1.cpp
	rm -f $(OBJ) p

