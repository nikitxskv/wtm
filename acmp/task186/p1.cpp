#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;}
int main()
{
	FILE *f=fopen("INPUT.TXT","r"),*g=fopen("OUTPUT.TXT","w");
	int n;
	fscanf(f,"%d",&n);
	vector<int> v(n),u(n);
	for(int i=0;i<n;i++) fscanf(f,"%d",&v[i]);
	sort(v.begin(),v.end());
	for(int i=1;i<n;i++)
	{
		if(i<3) u[i]=v[i]-v[0];
		else u[i]=min(max(u[i-2],v[i]-v[i-1]),max(u[i-3],v[i]-v[i-2]));
	}
	fprintf(g,"%d\n",u.back());
	fclose(f);
	fclose(g);
	return 0;
} 
