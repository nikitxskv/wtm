#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	string s;
	cin>>s;
	vector<vector<int> > v(s.size(),vector<int>(s.size()));
	for(int j=0;j<s.size();j++)
	{
		for(int i=j;i>=0;i--)
		{
			if(i==j) v[i][j]=1;
			else
			{
				v[i][j]=(s[i]==s[j]?v[i+1][j]+v[i][j-1]+1:v[i+1][j]+v[i][j-1]-v[i+1][j-1]);
			}
		}
	}
	//for(int i=0;i<s.size();i++) for(int j=0;j<s.size();j++) cout<<v[i][j]<<(j==s.size()-1?"\n":" ");
	cout<<v[0][s.size()-1]<<endl;
	return 0;
} 
