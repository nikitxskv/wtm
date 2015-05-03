#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int N,i,j;
	cin>>N;
	string s;
	vector<int> w(N);
	vector<char> z(N,'.');
	vector<vector<int> > v(N,w),u(N,w);
	vector<vector<char> > c(N,z);
	for(i=0;i<N;i++) 
	{
		cin>>s;
		for(j=0;j<N;j++) v[i][j]=int(s[j]-'0');
	}
	u[0]=v[0];
	for(i=1;i<N;i++) u[i][0]=u[i-1][0]+v[i][0];
	for(j=1;j<N;j++) u[0][j]=u[0][j-1]+v[0][j];
	for(i=1;i<N;i++) for(int j=1;j<N;j++) u[i][j]=min(u[i-1][j]+v[i][j],u[i][j-1]+v[i][j]);
	i=N-1,j=N-1;
	while(i>0||j>0)
	{
		c[i][j]='#';
		u[i-1][j]<u[i][j-1]?i--:j--;
		if(j==0) for(;i>=0;i--) c[i][j]='#';
		if(i==0) for(;j>=0;j--) c[i][j]='#';
	}
	c[0][0]='#';
	for(i=0;i<N;i++) for(j=0;j<N;j++) cout<<c[i][j]<<(j!=N-1?"":"\n");
	return 0;
} 
