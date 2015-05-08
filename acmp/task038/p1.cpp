#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	vector<vector<int> > u(n,vector<int>(n)),sum(n,vector<int>(n));
	for(int j=0;j<v.size();j++)
	{
		for(int i=j;i>=0;i--)
		{
			if(i==j)
			{
				u[i][j]=v[i];
				sum[i][j]=v[i];
			}
			else
			{
				u[i][j]=max(v[i]+sum[i+1][j]-u[i+1][j],v[j]+sum[i][j-1]-u[i][j-1]);
				sum[i][j]=sum[i][j-1]+v[j];
			}
			
		}
	}
//	for(int i=0;i<v.size();i++) for(int j=0;j<v.size();j++) cout<<u[i][j]<<(j==v.size()-1?"\n\n\n":"\t");
//	cout<<"Summs:\n";
//	for(int i=0;i<v.size();i++) for(int j=0;j<v.size();j++) cout<<sum[i][j]<<(j==v.size()-1?"\n\n\n":"\t");
	if(sum[0][n-1]-2*u[0][n-1]>0) cout<<"2\n";
	else if(sum[0][n-1]-2*u[0][n-1]<0) cout<<"1\n";
	else cout<<"0\n";
	return 0;
} 
