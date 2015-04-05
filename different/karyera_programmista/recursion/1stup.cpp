#include "fun.h"

void up(int n,int &k)
{
    if(n==N)
    {
	k++;
	return;
    }
    if(n>N) return;
    up(n+1,k);
    up(n+2,k);
    up(n+3,k);
    return;
}