#include <iostream>
using namespace std;

int main()
{
	int n,m,count=0;
	cin>>n;
	cin>>m;

	if(n==m){cout<<0<<endl;return 0;}


	while(n!=m)
	{
		if(n>m)
		{
			n--;
			count++;
		}
		if(m>n&&m%2==1)
		{
			m++;
			count++;
		}
		if(m>n&&m%2==0)
		{
			m/=2;
			count++;
		}
	}

	cout<<count<<endl;
	return 0;
} 
