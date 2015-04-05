#include <iostream>
using namespace std;

void Wiz(string &s);
void Cd(string &s, string l);

int main()
{
	int n;
	cin>>n;
	string s,k,l,r;
	s="/";

	for(int i=0;i<n;i++)
	{
		cin>>k;
		if(k[0]=='c')
		{
			cin>>l;
			l+='/';
			Cd(s,l);
		}
		else r+=s+'\n';
	}
	cout<<r;
	return 0;
} 

void Cd(string &s, string l)
{
	int i=0;
	if(l[i]=='/')
	{
		s="/";
		i++;
	}
	for(int j=i;j<l.size();j++)
	{
		if(l[j]=='.'&&l[j+1]=='.')
		{
			Wiz(s);
			j++;
		}
		else s+=l[j];
	}
	return;
}

void Wiz(string &s)
{
	s.pop_back();
	while(s[s.size()-1]!='/') s.pop_back();
	s.pop_back();
	return;
}