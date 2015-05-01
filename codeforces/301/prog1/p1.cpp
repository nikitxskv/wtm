#include <vector>
#include <iostream>
using namespace std;
int min(int x,int y) {return x<y?x:y;}
int abs(int x) {return x>0?x:-x;}
int main()
{
	int n,count=0;
	cin>>n;
	string s,z;
	cin>>s>>z;
	for(int i=0;i<n;i++) count+=min(abs(s[i]-z[i]),10-abs(s[i]-z[i])); 
	cout<<count<<endl;
	return 0;
} 
