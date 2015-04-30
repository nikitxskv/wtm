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
	vector<int> a(n),b(n);
	cin>>s>>z;
	for(int i=0;i<n;i++)
	{
		a[i]=int(s[i])-int('0');
		b[i]=int(z[i])-int('0');
	}
	for(int i=0;i<n;i++) count+=min(abs(a[i]-b[i]),10-abs(a[i]-b[i])); 
	cout<<count<<endl;
	return 0;
} 
