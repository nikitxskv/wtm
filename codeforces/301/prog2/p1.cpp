#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,k,p,x,y,med,sum=0;;
	cin>>n>>k>>p>>x>>y;
	vector <int> v(k),u;
	for(int i=0;i<k;i++) 
	{
		cin>>v[i];
		sum+=v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<k;i++)
	{
		if(v[i]>=y)
		{
			
		}
	}
	
	return 0;
} 
