#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
	int n;
	int **arr;
	cin>>n;
	arr=new int*[n];
	for(int i=0;i<n;i++) arr[i]=new int[n];
	for(int i=0;i<n;i++) arr[0][i]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{
				if(j-1<0) arr[i][j]=arr[i-1][j];
				else arr[i][j]=arr[i-1][j]+arr[i][j-1];
			}
	}
	cout<<arr[n-1][n-1];
	return 0;
}
