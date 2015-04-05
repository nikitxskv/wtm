#include <iostream>
using namespace std;
int main()
{
	int n,*a,*b,*c,x1=0,x2=0,x3=0;
	cin>>n;
	a=new int[n];
	b=new int[n-1];
	c=new int[n-2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		x1+=a[i];
	} 
	for(int i=0;i<n-1;i++)
	{
		cin>>b[i];
		x2+=b[i];
	}
	for(int i=0;i<n-2;i++)
	{
		cin>>c[i];
		x3+=c[i];
	}
	cout<<x1-x2<<"\n"<<x2-x3<<endl;
	return 0;
} 

