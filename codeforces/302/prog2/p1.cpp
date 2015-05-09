#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<string> m(n,string(n,'S'));
	if(k==0)
	{
		cout<<"YES"<<endl;
		for(int l=0;l<n;l++) for(int t=0;t<n;t++) cout<<m[l][t]<<(t==n-1?"\n":"");
		return 0;
	}
	for(int i=0;i<n;i++) for(int j=(i%2==0?0:1);j<n;j+=2)
	{
		m[i][j]='L';
		k--;
		if(k==0)
		{
			cout<<"YES"<<endl;
			for(int l=0;l<n;l++) for(int t=0;t<n;t++) cout<<m[l][t]<<(t==n-1?"\n":"");
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
} 
