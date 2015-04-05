#include "fun.h"

int perestanovka(char *s, char **ss, int k, int M) // perestanovki
{
    if(k>M) return -1;
    if(k==M) for(int j=0;j<fact(M)/k;j++) for(int i=0;i<k;i++) insert(s[k-1],ss[j*k+i],i,M);
    else
    {
	int w=0;
	for(int j=0;j<fact(k);j++) 
	{
	    for(int i=0;i<fact(M)/fact(k);i++) insert(s[k-1],ss[j*fact(M)/fact(k)+i],w,M);
	    w=(w+1)%k;
	}
    }
    perestanovka(s,ss,k+1,M);
    return 0;
}

int insert(char x, char *xx, int j, int M) // funkciya vstavki elementa na j-toe mesto
{
    if(j==M-1) xx[j]=x;
    else
    {
	for(int i=M-1;i>j;i--) xx[i]=xx[i-1];
	xx[j]=x;
    }
    return 0;
}

int fact(int kk) // faktorial
{
    if(kk==0) return 1;
    else return kk*fact(kk-1);
}