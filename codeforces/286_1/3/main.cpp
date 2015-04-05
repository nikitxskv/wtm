#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int prig(int d, int l, int *kamni, int n, int &max, int N);

int main()
{
	int N,d,l,max=0,n=0;
	cin>>N;
	cin>>d;
	int *kamni;
	kamni=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>kamni[i];
	}
	l=d;
	prig(d,l,kamni,n,max,N);
	cout<<max;
	return 0;
}

int prig(int d, int l, int *kamni, int n, int &max, int N)
{
	int k=0;
	if(d>30000||d>kamni[N-1])
	{
		if(n>max) max=n;
		return 0;
	}
	for(int i=0;i<N&&kamni[i]<d+1;i++)
	{
		if(kamni[i]==d) k++;
	}
	if(l!=1)prig(d+l-1,l-1,kamni,n+k,max,N);
	prig(d+l,l,kamni,n+k,max,N);
	prig(d+l+1,l+1,kamni,n+k,max,N);
	return 0;
}