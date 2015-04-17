#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
using namespace std;
vector<int> sum(vector<int> a, vector<int> b);
int main()
{
	FILE *f=fopen("INPUT.TXT","r"),*g=fopen("OUTPUT.TXT","w");
	char s[100];
	int i;
	fscanf(f,"%s",s);
	vector <int> v(strlen(s)),w(25),x(25);
	w[0]=1;
	vector<vector<int> > u(strlen(s),w);
	for(i=0;i<strlen(s);i++) v[i]=char(s[i])-48;
	if(v[0]*10+v[1]>9&&v[0]*10+v[1]<34) u[1][0]=2;
	for(i=2;i<strlen(s);i++) u[i]=sum(u[i-1],(v[i-1]*10+v[i]>9&&v[i-1]*10+v[i]<34)?u[i-2]:x);
	for(i=24;i>=0;i--) if(u.back()[i]!=0) break;
	for(;i>=0;i--) fprintf(g,"%d",u.back()[i]);
	return 0;
} 

vector<int> sum(vector<int> a, vector<int> b)
{
	vector<int> c(25);
	int p=0;
	for(int i=0;i<a.size();i++)
	{
		c[i]=a[i]+b[i]+p;
		p=c[i]/10;
		c[i]=c[i]%10;
	}
	return c;
}