#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int n,k,count;
	cin>>n>>k;
	count=n;
	string s;
	cin>>s;
	//vector<vector<int> > v(s.size(),vector<int>(s.size()));
	vector<int> u(2*n-1);
	for(int j=1;j<s.size();j++)
	{
		for(int i=j-1;i>=0;i--)
		{
			//v[i][j]=v[i+1][j-1]+(s[i]==s[j]?0:1);
			//if(v[i][j]<=k) count++;
			u[i+j]=u[i+j]+(s[i]==s[j]?0:1);
			if(u[i+j]<=k) count++;
		}
	}
	//for(int i=0;i<s.size();i++) for(int j=0;j<s.size();j++) cout<<v[i][j]<<(j==s.size()-1?"\n":" ");
	cout<<count<<endl;
	return 0;
} 
