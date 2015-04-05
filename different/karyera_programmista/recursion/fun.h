#include <stdio.h>
#include <iostream>
#include <set>
#include <iterator>
#include <string.h>
#include <math.h>
using namespace std;
#define N 5

void up(int n, int &k);
int find(int *A, int s, int f);
int step(int x, int y, int X, int Y, int &k, int Bx, int By);
int perestanovka(char *s, char **ss,int k, int M);
int insert(char x, char *xx, int j, int M);
int fact(int kk);