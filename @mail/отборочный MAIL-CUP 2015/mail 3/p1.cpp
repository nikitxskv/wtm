#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define N 4
using namespace std;
void Print(int **A);
int Equal(int **A, int **B);
int** Mult(int **A);

int main()
{
	int **A,**B,**C;
	A=new int*[N];
	B=new int*[N];
	C=new int*[N];
	for(int i=0;i<N;i++)
	{
		A[i]=new int[N];
		B[i]=new int[N];
		C[i]=new int[N];
		for(int j=0;j<N;j++)
		{
			cin>>A[i][j];
		}
	}
	int z=0;
	while(z<pow(2,N*N+1))
	{
		for(int i=0;i<N*N;i++) B[i/N][i%N]=((z&(1<<i))>>i);
		C=Mult(B);
		if(Equal(A,C)==1)
		{
			Print(C);
			return 0;
		}
		++z;
	}
	cout<<"NO SOLUTIONS"<<endl;
	return 0;
}

void Print(int **A)
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++) cout<<A[i][j]<<" ";
		cout<<endl;
	}
}

int Equal(int **A, int **B)
{
	for(int i=0;i<N;i++) for(int j=0;j<N;j++) if(A[i][j]!=B[i][j]) return -1; return 1;
}

int** Mult(int **A)
{
	int **B;
	B=new int*[N];
	for(int i=0;i<N;i++)
	{
		B[i]=new int[N];
		for(int j=0;j<N;j++) B[i][j]=(A[i][0]*A[0][j]+A[i][1]*A[1][j]+A[i][2]*A[2][j]+A[i][3]*A[3][j])%2;
	}
	return B;
}