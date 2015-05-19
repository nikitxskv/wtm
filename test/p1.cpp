
#include <cstdio>
#include <string>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	map<string,int> m;
	vector<string> v;
	char s;
	string ss;
	for(int i=0;i<5;i++)
	{
		cin>>ss;
		v.push_back(ss);
		scanf("%c",&s);
		if(s=='\n') break;
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ss;
		m[ss]=1;
	}
	for(int i=0;i<v.size();i++)
	{
		if(m[v[i]]!=1)
		{
			cout<<"Misspell\n";
			return 0;
		}
	}
	cout<<"Correct\n";
	return 0;
} 
