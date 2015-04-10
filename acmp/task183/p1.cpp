#include <iostream>
#include <vector>
using namespace std;

int main()
{
	FILE *f=fopen("INPUT.TXT","r"),*g=fopen("OUTPUT.TXT","w");
	int K,P;
	fscanf(f,"%d %d",&K,&P);
	vector<int> v(K+1);
	v[2]=1;
	for(int i=3;i<v.size();i++)
	{
		v[i]+=v[i-1];
		if(i%2==0) v[i]+=v[i/2];
		v[i]=v[i]%P;
	}
	fprintf(g,"%d",v[K]%P);
	return 0;
} 
