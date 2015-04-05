#include "fun.h"

int step(int x, int y, int X, int Y, int &k, int Bx, int By)
{
    if(x==Bx && y==By) return 0;
    if(x==X && y==Y)
    {
	k++;
	return 0;
    }
    if(x<X) step(x+1,y,X,Y,k,Bx,By);
    if(y<Y) step(x,y+1,X,Y,k,Bx,By);
    return 0;
}