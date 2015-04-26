#include <iostream>
using namespace std;
int main()
{
	string s,c;
	c="CODEFORCES";
	cin>>s;
	if(s.size()<10)
	{
		cout<<"NO\n";
		return 0;
	}
	int i,j;
	for(i=0;i<10;i++) if(s[i]!=c[i]) break;
	for(j=9;j>=i;j--) if(s[s.size()-1-9+j]!=c[j]) break;
	if(i>j) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
} 