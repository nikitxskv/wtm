#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int n,m,count=0;
	cin>>n>>m;
	vector< vector<int> > v(n+1,vector<int>(n+1));
	for(int i=1;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(j==0) v[i][j]=1;
			else if(i==j) v[i][j]=1;
			else v[i][j]=v[i-1][j-1]+v[i-1][j];
			if(i==n&&j>=m) count+=v[i][j];
		}
	}
	//for(int i=0;i<v.size();i++) for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<(j==n?"\n":" ");
	cout<<count<<endl;
	return 0;
} 
