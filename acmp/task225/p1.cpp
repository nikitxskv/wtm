#include <iostream>
#include <vector>
using namespace std;
int min(int x,int y) {return x<y?x:y;}

int main()
{
	FILE *f=fopen("INPUT.TXT","r"),*g=fopen("OUTPUT.TXT","w");
	int n,i,m=0,mp=0,mpp=0,p;
	fscanf(f,"%d",&n);
	vector<int> A(n),B(n),C(n);
	for(i=0;i<n;i++) fscanf(f,"%d %d %d",&A[i],&B[i],&C[i]);
	mp=A[0];
	m=min(A[0]+A[1],B[0]);
	if(n==1) m=mp;
	for(i=2;i<n;i++)
	{
		p=m;
		m=min(min(m+A[i],mp+B[i-1]),mpp+C[i-2]);
		mpp=mp;
		mp=p;
	}
	fprintf(g,"%d",m);
	fclose(f);
	fclose(g);
	return 0;
} 
