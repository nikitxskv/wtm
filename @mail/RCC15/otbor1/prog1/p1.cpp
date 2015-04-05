#include <iostream>
#include <set>
using namespace std;
int abs(int a);

int main()
{
	int n,m,l,k,s1,s2,l1,l2;
	cin>>n;
	multiset<int> G,D;
	for(int i=0;i<n;i++)
	{
		s1=0;
		s2=0;
		G.clear();
		D.clear();
		cin>>m>>l;
		l1=l;
		l2=l;
		for(int j=0;j<m;j++)
		{
			cin>>k;
			G.insert(k);
		}
		for(int j=0;j<m;j++)
		{
			cin>>k;
			D.insert(-k);
		}
		for(auto it=G.begin();l1>0;it++,l1--) s1+=*it;
		for(auto it=D.begin();l2>0;it++,l2--) s2+=abs(*it);
		if(s1>s2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
} 

int abs(int a)
{
	if(a>=0) return a;
	else return -a;
}

