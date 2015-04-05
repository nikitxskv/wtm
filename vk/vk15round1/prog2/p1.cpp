#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	string s;
	int ch,mi,se;
	int n,M,T;
	int *t,*y;
	t=new int[n];
	y=new int[n];
	cin>>n>>M>>T;
	if(n<M)
	{
		cout<<"No solution"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>s;
		t[i]=60*60*atoi(&s[0])+60*atoi(&s[3])+atoi(&s[6]);
		y[i]=0;
	}
	int count;
	int ind=1;
	for(int i=0;i<n;i++)
	{
		count=1;
		if(i==n-1&&y[i]==0)
		{
			y[i]=ind;
			ind++;
		}
		for(int j=i+1;j<n;j++)
		{
			if(y[i]==0)
			{
				y[i]=ind;
				ind++;
			}
			if(t[j]<t[i]+T) count++;
			else break;
			if(count<=M&&y[j]==0)
			{
				y[j]=ind;
				ind++;
			}
			if(count>M&&y[j]==0) y[j]=1;
		}
	}
	cout<<ind-1<<endl;
	for(int i=0;i<n;i++) cout<<y[i]<<endl;
	delete t;
	delete y;
	return 0;
} 

