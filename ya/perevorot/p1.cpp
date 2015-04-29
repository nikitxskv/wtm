#include <iostream>
using namespace std;

int main()
{
	string s,r;
	int i,j;
	cin>>s>>i>>j;
	r=s;
	for(int k=i-1,l=j-1;k<j;k++,l--) r[k]=s[l];
	cout<<r<<endl;
	return 0;
} 
