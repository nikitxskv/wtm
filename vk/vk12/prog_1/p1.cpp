#include <iostream>
using namespace std;
int main()
{
	int n,a[4]={0,0,0,0},j,count=0;
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		cin>>j;
		a[j-1]++;
	}
	count+=a[3];
	if(a[2]<a[0])
	{
		count+=a[2];
		a[0]-=a[2];
		count+=a[1]/2;
		if(a[1]%2!=0) a[0]+=2;
		count+=(a[0]/4);
		if(a[0]%4!=0) count++;
	}
	else
	{
		count+=a[0];
		count+=a[2]-a[0];
		count+=a[1]/2;
		if(a[1]%2!=0) count++;
	}

	cout<<count<<endl;

	return 0;
} 