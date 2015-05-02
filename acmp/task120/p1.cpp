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
	u[0][0]=v[0][0];
	for(int j=1;j<M;j++) u[0][j]=u[0][j-1]+v[0][j];
	for(int i=1;i<N;i++) u[i][0]=u[i-1][0]+v[i][0];
	for(int i=1;i<N;i++) for(int j=1;j<M;j++) u[i][j]=min(u[i-1][j]+v[i][j],u[i][j-1]+v[i][j]);
	cout<<u.back().back()<<endl;
	return 0;
} 
