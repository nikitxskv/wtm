#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	vector<int> a,b;
	int n,z,m;
	cin>>n;
	m=n;
	while(m>0)
	{
		a.push_back(m%10);
		m=m/10;
	}
	while(1)
	{	
		m=0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]>0)
			{
				m+=pow(10,i);
				a[i]--;
			}
		}
		b.push_back(m);
		for(z=0;z<a.size();z++) if(a[z]!=0) break;
		if(z==a.size()) break;
	}
	cout<<b.size()<<endl;
	for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
	cout<<endl;
	return 0;
} 