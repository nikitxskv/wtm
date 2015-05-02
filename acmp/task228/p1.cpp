#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	freopen("INPUT.TXT","rt",stdin);
	FILE *f=fopen("OUTPUT.TXT","w");
	int n;
	double cd,ce;
	cin>>n;
	vector<double> d(n),e(n),m(n,100);
	for(int i=0;i<d.size();i++) cin>>d[i]>>e[i];
	for(int i=1;i<n;i++)
	{
		cd=d[i]/d[i-1];
		ce=e[i]/e[i-1];
		if(cd>1&&cd>=ce) m[i]=m[i-1]*cd; 
		else if(ce>1&&ce>cd) m[i]=m[i-1]*ce;
		else m[i]=m[i-1];
	}
	fprintf(f,"%.2lf\n",m.back());
	return 0;
} 
