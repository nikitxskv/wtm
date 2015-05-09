#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int n,count=0,sum=0,currsum=0;
	cin>>n;
	vector<int> a(n+1);
	for(int i=1;i<a.size();i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	vector<vector<bool> > posible(n+1,vector<bool>(sum+1,false));
	posible[0][0]=true;
	for(int i=1;i<a.size();i++)
	{
		currsum+=a[i];
		for(int j=0;j<=currsum;j++)
		{
			if(j<a[i]) posible[i][j]=posible[i-1][j];
			else posible[i][j]=posible[i-1][j]|posible[i-1][j-a[i]];
			if(i==n&posible[i][j]==true) count++;
		}
	}
	cout<<count<<endl;
	return 0;
} 
