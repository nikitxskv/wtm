#include <iostream>
#include <vector>
using namespace std;
int min(int x,int y) {return x<y?x:y;}

int main()
{
	FILE *f=fopen("INPUT.TXT","r"),*g=fopen("OUTPUT.TXT","w");
	int n,i,t=0,m;
	fscanf(f,"%d",&n);
	vector<int> A(n),B(n),C(n),T(n),N(n);
	for(i=0;i<n;i++) fscanf(f,"%d %d %d",&A[i],&B[i],&C[i]);
	for(i=0;i<n;i++) cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<endl;
	T[n-1]=A[n-1];
	N[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		if()
	}


/*	T[0]=A[0];
	A[1]+A[0]<B[0]?T[1]=A[1]:T[0]=B[1];
	cout<<"T[0]= "<<T[0]<<endl;
	cout<<"T[1]= "<<T[1]<<endl;
	for(i=2;i<n;i++)
	{
		m=min(min(C[i-2],A[i-2]+B[i-1]),A[i]+A[i-1]+A[i-2]);
		if(m==C[i-2]) T[i-2]=C[i-2];
		else if(m==A[i-2]+B[i-1]) T[i-1]=B[i-1];
		else if(m==A[i]+A[i-1]+A[i-2]) T[i]=A[i];
		cout<<"T["<<i<<"]= "<<T[i]<<endl;
	}*/
	return 0;
} 
