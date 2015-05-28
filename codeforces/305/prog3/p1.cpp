#include <iostream>
using namespace std;
#define N 1000000
int main()
{
	unsigned long long int m,h1,a1,x1,y1,h2,a2,x2,y2;
	m=500000000000;
	cout<<m<<endl;
	cin>>m>>h1>>a1>>x1>>y1>>h2>>a2>>x2>>y2;
	for(int i=1;i<N;i++)
	{
		h1=(x1*h1+y1)%m;
		h2=(x2*h2+y2)%m;
		if(h1==a1&&h2==a2)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
} 
