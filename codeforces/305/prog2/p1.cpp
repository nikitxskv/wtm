#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int GetMax(vector<int> u);
int Maxx(vector<int> u);
int main()
{
	int n,m,q,k,l,t;
	cin>>n>>m>>q;
	vector<vector<int> > v(n,vector<int>(m));
	vector<int> u(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) scanf("%d",&v[i][j]);
		u[i]=GetMax(v[i]);
	}
	t=Maxx(u);
	for(int i=0;i<q;i++)
	{
		scanf("%d %d",&k,&l);
		k--,l--;
		v[k][l]=(v[k][l]+1)%2;
		u[k]=GetMax(v[k]);
		t=Maxx(u);
		cout<<u[t]<<endl;
	}
	return 0;
} 

int GetMax(vector<int> u)
{
	int curm=0,m=0;
	for(int i=0;i<u.size();i++)
	{
		if(u[i]==1) curm++;
		if(u[i]==0||i==u.size()-1) m=max(curm,m),curm=0;
	}
	return m;
}

int Maxx(vector<int> u)
{
	int m=0,j;
	for(int i=0;i<u.size();i++) if(u[i]>m) m=u[i],j=i;
	return j;
}