#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	map<int,vector<int> > m;
	set<int> s;
	int n,num,res;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num>>res;
		m[res].push_back(num);
		s.insert(-res);
	}
	for(auto it=s.begin();it!=s.end();it++) 
	{
		sort(m[-(*it)].begin(),m[-(*it)].end());
		for(int i=0;i<m[-(*it)].size();i++) cout<<m[-(*it)][i]<<" "<<-(*it)<<endl;
	}
	return 0;
} 
