#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a[26];
	for(int i=0;i<26;i++) a[i]=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a'&&s[i]<='z') a[s[i]-'a']++;
		if(s[i]>='A'&&s[i]<='Z') a[s[i]-'A']++;
	}
	for(int i=0;i<26;i++) if(a[i]==0) {cout<<"NO\n";return 0;}
	cout<<"YES\n";

	return 0;
} 
