#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int N;
	cin>>N;
	vector<unsigned long long> w(2*N-1);
	vector<vector<unsigned long long> > v(2*N-1,w);
	for(int j=0;j<2*N-1;j++) v[0][j]=1;
	for(int i=1;i<2*N-1;i++) for(int j=N-1;j<2*N-1;j++)
	{
		if(j==N-1) v[i][j]=v[i-1][j]+v[i-1][j-1]+v[i-1][j+1];
		else 
		{
			v[i][j]=v[i][j-1]+v[i-1][j]+((j+1<2*N-1)?v[i-1][j+1]:0);
			v[i][2*N-2-j]=v[i][j];
		}
	}
	cout<<v.back()[N-1]<<endl;
	return 0;
} 
