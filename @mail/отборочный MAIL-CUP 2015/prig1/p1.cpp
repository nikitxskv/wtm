#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int Wiz(int x,vector <int> v);
int pod(int nach,int kon,int *s,vector <int> &v);

int main()
{
	vector <int> v;
	int x,n=0,j=0;
	long sum=0;

	cin>>x;
	for(int i=x;i>0;i/=2) n++;

	int *s=new int[n];

	for(int i=0;i<n;i++,j++) s[i]=(((x&(1<<j))>>j));

	for(int i=0;i<n;++i) for(int k=n-1;k>=0;--k) if(i<=k) pod(i,k,s,v);

	for(int i=0;i<v.size();++i) sum+=v[i];
	cout<<sum<<endl;

	return 0;
}

int pod(int nach,int kon,int *s,vector <int> &v)
{
	int x=0;
	for(int i=nach,j=0;i<=kon;++i,++j) x+=pow(2,j)*s[i];
	if(Wiz(x,v)) v.push_back(x);
	return 0;
}

int Wiz(int x,vector <int> v)
{
	for(int i=0;i<v.size();i++) if(v[i]==x) return 0;
	return 1;
}