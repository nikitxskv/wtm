#include <iostream>
#include <string>
using namespace std;

int main()
{
	int k,l,b,e;
	string s;
	cin>>s>>k;
	if(s.size()%k!=0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	l=s.size()/k;
	for(int i=0;i<k;i++)
	{
		b=i*l;
		e=(i+1)*l-1;
		if(b==e)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		for(;b<e;b++,e--) if(s[b]!=s[e])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
} 
