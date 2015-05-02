#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	freopen("INPUT.TXT","rt",stdin);
	freopen("OUTPUT.TXT","wt",stdout);
	int n,sum;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	cin>>sum;
	vector<int> u(sum+1,1000001);
	u[0]=0;
	for(int i=1;i<u.size();i++)
	{
		for(int j=0;j<v.size();j++)
		{
			if(v[j]<=i&&u[i-v[j]]!=-1)
			{
				u[i]=min(u[i],u[i-v[j]]+1);
			}
		}
		if(u[i]==1000001) u[i]=-1;
	}
	cout<<u.back()<<endl;
	return 0;
} 
