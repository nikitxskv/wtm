#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int n,i1=-1,j1=-1,f=0,count=0;
	map<char,int> g1,g2;
	map<int,int> ff;
	map<vector<int>, int> vv; 
	string s,t;
	cin>>n>>s>>t;
	for(int i=1;i<n+1;i++) if(s[i-1]!=t[i-1])
	{
		count++;
		vector<int> v;
		v.push_back(s[i-1]);
		v.push_back(t[i-1]);
		vv[v]++;
		if(vv[v]==1)
		{
			g1[s[i-1]]=i;
			g2[t[i-1]]=i;
			if(ff[s[i-1]*t[i-1]]!=0 && f!=2)
			{
				i1=ff[s[i-1]*t[i-1]], j1=i;
				f=2;
			}
			if(ff[s[i-1]*t[i-1]]==0) ff[s[i-1]*t[i-1]]=i;
			if(f<1)
			{
				if(g1[t[i-1]]!=0)
				{
					i1=g1[t[i-1]];
					j1=i;
					f=1;
				}
				if(g2[s[i-1]]!=0)
				{
					i1=g2[s[i-1]];
					j1=i;
					f=1;
				}
			}
		}
	}
	cout<<count-f<<endl<<i1<<" "<<j1<<endl;
	return 0;
}
