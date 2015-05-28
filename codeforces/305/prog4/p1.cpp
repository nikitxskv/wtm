#include <iostream>
#include <stdio.h>
#include <vector>
#include <ctime>
using namespace std;
int qs(vector<int> &v, int first, int last, vector<int> &ij);
int main()
{
	int n,k=1;
	cin>>n;
	vector<int> v(n),ind(n),u(n),answer(n);
	for(int i=0;i<n;i++) scanf("%d",&v[i]),ind[i]=i;
	qs(v,0,n-1,ind);
	for(int i=0;i<n;i++)
	{
		u[ind[i]]+=(ind[i]-1>=0?u[ind[i]-1]:0)+(ind[i]+1<n?u[ind[i]+1]:0)+1;
		if(ind[i]-1>=0) u[ind[i]-u[ind[i]-1]]=u[ind[i]];
		if(ind[i]+1<n) u[ind[i]+u[ind[i]+1]]=u[ind[i]];
		if(u[ind[i]]==k) cout<<v[i]<<" ",k++;
		if(u[ind[i]]>k)
		{
			for(int l=0;l<=u[ind[i]]-k;l++) cout<<v[i]<<" ";
			k=u[ind[i]]+1;
		}
	}
	cout<<endl;
	return 0;
} 

int qs(vector<int> &v, int first, int last, vector<int> &ij)
{
	int i=first,j=last,x=v[(first+last)/2],y;

	while(i<=j)
	{
		while(v[i]>x) i++;
		while(v[j]<x) j--;

		if(i<=j)
		{
			if(v[i]<v[j])
			{
				y=v[i], v[i]=v[j], v[j]=y;
				y=ij[i], ij[i]=ij[j], ij[j]=y;

			}
			i++;
			j--;
		}
	}
	if(i<last) qs(v,i,last,ij);
	if(j>first) qs(v,first,j,ij);
	return 0;
}