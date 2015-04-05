#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;
int prov(int x);
int por(int x);

int main()
{
	int n,*a,*b,*c,kk,**arr,d;
	cin>>n;
	a=new int[n];
	b=new int[n];
	for(int i=0;i<n;i++) cin>>b[i];
	for(int i=0;i<n;i++) a[i]=0;
	kk=0;
	while(b[0]>9)
	{
		b[0]=b[0]-9;
		a[0]=a[0]+9*pow(10,kk);
		kk++;
	}
	a[0]=a[0]+b[0]*pow(10,kk);

	for(int i=1;i<n;i++)
	{
		if(b[i]>b[i-1])
		{
			while(b[i]>9)
			{
				b[i]=b[i]-9;
				a[i]=a[i]+9*pow(10,kk);
				kk++;
			}
			a[i]=a[i]+b[i]*pow(10,kk);
		}
		else
		{
			d=b[i-1]-b[i]-1;
			a[i]=a[i-1]*10;
			a[i]=a[i]-d*pow(10,por(a[i])-1)
		}
	}
	
	for(int i=0;i<n;i++) cout<<a[i]<<endl;
	return 0;
}

int prov(int x)
{
	int r=0;
	while(x>0)
	{
		r=r+x%10;
		x=x/10;
	}
	return r;
}

int por(int x)
{
	int p=0;
	while(x>0)
	{
		x=x/10;
		++p;
	}
	return p;
}