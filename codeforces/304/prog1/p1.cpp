#include <iostream>
using namespace std;

int main()
{
	int k,n,w,sum;
	cin>>k>>n>>w;
	sum=k*(w*(w+1))/2;
	cout<<(n>sum?0:sum-n);
	cout<<endl;
	return 0;
} 
