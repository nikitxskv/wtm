#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	for(int i=1;i<n;i++)
	{
		if(a[i]<=a[i-1])
		{
			count+=a[i-1]-a[i]+1;
			a[i]+=a[i-1]-a[i]+1;
		}
	}
	//for(int i=0;i<n;i++) cout<<a[i]<<" ";
	//cout<<endl;
	cout<<count<<endl;
	return 0;
} 
