#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	freopen("INPUT.TXT","rt",stdin);
	freopen("OUTPUT.TXT","wt",stdout);
	int E,F,N,sum;
	cin>>E>>F>>N;
	sum=F-E;
	vector<int> p(N),w(N),mx(sum+1,0),mn(sum+1,500000000),v(sum+1,-1);
	for(int i=0;i<p.size();i++) cin>>p[i]>>w[i];
	v[0]=1;
	mn[0]=0;
	for(int i=1;i<sum+1;i++)
	{
		for(int j=0;j<w.size();j++)
		{
			if(w[j]<=i&&v[i-w[j]]==1)
			{
				v[i]=1;
				mn[i]=min(mn[i],mn[i-w[j]]+p[j]);
				mx[i]=max(mx[i],mx[i-w[j]]+p[j]);
			}
		}
	}
	v.back()==-1?cout<<"This is impossible."<<endl:cout<<mn.back()<<" "<<mx.back()<<endl;
	return 0;
} 
