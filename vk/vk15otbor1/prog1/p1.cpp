#include <iostream>
using namespace std;
void registr(string &s1, string &s2);
int main()
{
	int n,count,countmax=1;
	cin>>n;
	string *s1=new string[n];
	string *s2=new string[n];
	string s3;

	for(int i=0;i<n;i++)
	{
		cin>>s1[i];
		cin>>s3;
		cin>>s2[i];
	}

	for(int i=0;i<n;i++) registr(s1[i],s2[i]);
	
	if(n==1&&s2[0]=="polycarp")
	{
		cout<<2<<endl;
		return 0;
	}

	int k;
	for(int i=n-1;i>=0;i--)
	{
		k=i;
			count=1;
			for(int j=k-1;j>=0;j--)
			{
				if(s2[k]==s1[j])
				{
					k=j;
					count++;
				}
				if(s2[k]=="polycarp")
				{
					count++;
					break;
				}
			}
			if(countmax<count) countmax=count;
	}

	cout<<countmax<<endl;
	return 0;
} 

void registr(string &s1, string &s2)
{
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z') s1[i]+=32;
	}
	for(int i=0;i<s2.size();i++)
	{
		if(s2[i]>='A'&&s2[i]<='Z') s2[i]+=32;
	}
	return;
}