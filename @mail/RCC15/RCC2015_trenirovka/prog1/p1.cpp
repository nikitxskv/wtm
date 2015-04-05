#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{

	int n,k,m;
	cin>>n>>k;
	map<int,int> kk;
	vector<int> v;
	int *a=new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(kk[a[i]]==0)
		{
			kk[a[i]]++;
			v.push_back(a[i]);
			a[i]=-1;
			k--;
		}
		if(k==0) break;
	}
	if(k!=0) for(int i=0;i<n;i++) 
	{
		if(a[i]!=-1)
		{
			kk[a[i]]++;
			k--;
		}
		if(k==0) break;
	}
	for(int i=0;i<v.size();i++) for(int j=0;j<kk[v[i]];j++) cout<<v[i]<<" "; 
	cout<<endl;
	return 0;
} 
