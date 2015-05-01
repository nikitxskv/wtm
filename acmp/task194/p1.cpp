#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	freopen("INPUT.TXT","rt",stdin);
	freopen("OUTPUT.TXT","wt",stdout);
	int n;
	cin>>n;
	vector<int> v(n,1);
	v[2]=2;
	for(int i=3;i<n;i++) v[i]=v[i-1]+v[i-3]+1;
	cout<<v.back();
	return 0;
} 
