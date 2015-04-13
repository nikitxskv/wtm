#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int main()
{
	FILE *f=fopen("INPUT.TXT","r"),*g=fopen("OUTPUT.TXT","w");
	int n,x,cr,cl,min=0;
	fscanf(f,"%d",&n);
	vector<int> v(n);
	for(int i=0;i<n;i++) fscanf(f,"%d",&v[i]);
	sort(v.begin(),v.end());
	cl=v[1]-v[0];
	for(int i=2;i<n-1;i++)
	{
		
	}
	min=max(min,v[v.size()-1]-cb);
	fprintf(g,"%d",min);
	return 0;
} 
