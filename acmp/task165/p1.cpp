#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int N,M;
	cin>>N>>M;
	vector<int> w(M);
	vector<vector<int> > v(N,w),u(N,w);
	for(int i=0;i<N;i++) for(int j=0;j<M;j++) cin>>v[i][j];
	u[0][0]=1;
	for(int i=0;i<N;i++) for(int j=0;j<M;j++)
	{
		if(v[i][j]>0&&j+v[i][j]<M) u[i][j+v[i][j]]+=u[i][j];
		if(v[i][j]>0&&i+v[i][j]<N) u[i+v[i][j]][j]+=u[i][j];
	}
	cout<<u.back().back()<<endl;
	return 0;
} 
