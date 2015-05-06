#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int n,sum,k,q,mx=0,l,r;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<v.size();i++) cin>>v[i];
	cin>>q;
	vector<int> s(q);
	for(int i=0;i<s.size();i++) 
	{
		cin>>s[i];
		mx=max(mx,s[i]);
	}
	vector<int> u(mx+1,2*100000000+1),ck(mx+1,2*100000000+1);
	u[0]=0;
	for(int i=1;i<u.size();i++)
	{
		for(int j=0;j<v.size();j++)
		{
			if(v[j]<=i&&u[i-v[j]]!=-1&&(ck[i-v[j]]==v[j]||ck[i-v[j]]==2*100000000+1))
			{
				u[i]=u[i-v[j]]+1;
				ck[i-v[j]]!=0?ck[i]=ck[i-v[j]]:ck[i]=v[j];
			}
		}
		if(u[i]==2*100000000+1) u[i]=-1;
	}
	//for(int i=0;i<u.size();i++) cout<<i<<" "<<u[i]<<" "<<ck[i]<<endl;
	for(int i=0;i<q;i++)
	{
		cout<<"huy\n";
		l=0,r=mx;
		sum=2*100000000+1;
		while(l<=r)
		{
			if(v[l]+v[r]>s[i]) r--;
			if(v[l]+v[r]==s[i])
			{
				u[l]!=-1&&u[r]!=-1?sum=min(sum,u[l]+u[r]):sum=sum;
				l++;
				r--;
			}
			if(v[l]+v[r]<s[i]) l++;
		}
		if(sum==2*100000000+1) sum=-1;
		cout<<sum<<endl;
	}
	return 0;
} 


/*
if(mmm[i-v[j]].size()<2||(mmm[i-v[j]].size()==2&&(mmm[i-v[j]][0]==v[j]||mmm[i-v[j]][1]==v[j])))
				{
					u[i]=min(u[i],u[i-v[j]]+1);
					mmm[i]=mmm[i-v[j]];
					if(mmm[i].size()==0) mmm[i].push_back(v[j]);
					else if(mmm[i].size()<2&&mmm[i][0]!=v[j]) mmm[i].push_back(v[j]);
				}
				else mmm[i]=test;



for(int j=0;j<s.size();j++)
		{
			if(s[j]==i)
			{
				q--;
				if(u[i]>k) ma[s[j]]=-1;
				else ma[s[j]]=u[i];
				break;
			}
		}
		if(q==0) break;

*/
