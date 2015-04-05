#include <iostream>
//#include <fstream>
using namespace std;

//int Wiz(string s, int nach, int kon, int a[]);
int main()
{
	int a[26],count=0;
	for(int i=0;i<26;i++) cin>>a[i];
	//ifstream iny;
	//iny.open("100000.txt");
	string s;
//	iny>>s;
	cin>>s;

	int i,j;
 	int sum1=0;
 	for(int i=0;i<s.size();i++) sum1+=a[s[i]-97];
 	if(sum1==0&&s[0]==s[s.size()-1])
 	{
 		cout<<1;
 		return 0;
 	}
 	int sum2;
	for(i=0;i<s.size();i++)
	{
		sum1-=a[s[i]-97];
		sum2=sum1;
		for(j=s.size()-1;j>i;j--)
		{
			//cout<<"i="<<i<<"  j="<<j<<endl;
			sum2-=a[s[j]-97];
			if(s[i]==s[j]&&sum2==0) count++;
		}
	}

	cout<<count<<endl;
	return 0;
} 

/*int Wiz(string s, int nach, int kon, int a[])
{
	if(nach+1==kon) return 1;
	int kk=0;
	for(int i=nach+1;i<kon;i++) kk+=a[s[i]-97];
	if(kk==0) return 1;
	return 0;
}*/



/*
	for(int i=0;i<s.size();i++)
	{
		for(int j=s.size()-1;j>0;j--)
		{
			if(i<j&&s[i]==s[j]) if(Wiz(s,i,j,a)) count++;
		}
	}
	


	long sum=0
	for(int i=0,j=1;i<s.size()&&j<s.size();)
	{
		if(s[i]==s[j]&&i+1==j) count++;
		else
		{
			sum+=s[i+1]
		}
	}*/

/*	for(int i=0;i<s.size()-1;i++)
	{
		sum=0;
		for(int j=i+1;j<s.size();j++)
		{
			if(s[i]==s[j]&&i+1==j) count++;
			else if(j-i>1)
			{
				sum+=a[s[j-1]-97];
				if(sum==0&&s[i]==s[j])count++;
			}
		}
	}*/

