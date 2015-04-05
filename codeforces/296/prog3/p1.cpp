#include <iostream>
#include <set>
using namespace std;
int main()
{
	unsigned long long w,h,n;
	cin>>w>>h>>n;
	unsigned long long xl=0,xr=w,yd=0,yu=h,slice;
	char D;
	set<unsigned long long> x,y;
	x.insert(0);
	x.insert(w);
	y.insert(0);
	y.insert(h);
	unsigned long long a=w,b=h,m=0;
	unsigned long long yi=0,yj=h,xi=0,xj=w;
	unsigned long long S;
	for(int i=0;i<n;i++)
	{
		cin>>D>>slice;
		if(D=='H')
		{
			y.insert(slice);
			if(slice>yi && slice<yj)
			{
				for(auto t=y.begin(),l=y.begin();t!=y.end();t++)
				{
					//m=max(*t-*l,m);
					if(*t-*l>m)
					{
						yi=*l;
						yj=*t;
						m=*t-*l;
					}
					l=t;
				}
				b=m;
			}
			S=a*b;
			cout<<S<<endl;
			m=0;
		}
		if(D=='V')
		{
			x.insert(slice);
			if(slice>xi && slice<xj)
			{
				for(auto t=x.begin(),l=x.begin();t!=x.end();t++)
				{
					//m=max(*t-*l,m);
					if(*t-*l>m)
					{
						xi=*l;
						xj=*t;
						m=*t-*l;
					}
					l=t;
				}
				a=m;
			}
			S=a*b;
			cout<<S<<endl;
			m=0;
		}
	}
	return 0;
}