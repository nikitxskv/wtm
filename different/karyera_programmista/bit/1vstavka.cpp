#include "fun.h"

int vstavka(int &N, int M, int j, int i)
{
    for(int k=0;k<(j-i);k++)
    {
	N=N&(~(1<<(k+i)));
    }
    N=N|(M<<i);
    return N;
}