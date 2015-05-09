#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int n,count=0,sum=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	vector<vector<int> > v(sum+1,vector<int>(0));
	v[0]=a;
	for(int i=0;i<v.size();i++)
	{
		if(v[i].size()==n)
		{
			count++;
			for(int j=0;j<v[i].size();j++)
			{
				if(v[i][j]!=0&&v[i+v[i][j]].size()==0)
				{
					v[i+v[i][j]]=v[i];
					v[i+v[i][j]][j]=0;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
} 
