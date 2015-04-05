#include "fun.h"

void print(int x)
{
    for(int i=(sizeof(x)/2)*8-1; i>=0; --i)
    {
	printf("%d", (x >> i)&1);
    }
    cout<<endl;
    return;
}
