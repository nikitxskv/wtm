#include <iostream>
#include <math.h>
using namespace std;
void zap(string *st,int r,int t,char bukv,int count,int b[],int n,int kk);
void add(string *st, int nach, int kon, char bukv);
void res(string s,int n, string *&st,int &d);
int h(string s, string t);
string shift(string s, int i);
int row(string s, string t);

int main()
{
	int n,m,max=0,count=0;
	string s;
	string *st;
	cin>>n;
	cin>>s;
	int d;
	res(s,n,st,d);
	int r;
	for(int i=0;i<d;i++)
	{
		cout<<i<<endl;
		r=row(s,st[i]);
		if(r>max)
		{
			max=r;
			count=1;
		}
		else if(r==max) count++;
	}
	cout<<count<<endl;
	delete [] st;
	return 0;
} 

int h(string s, string t)
{
	int count=0;
	for(int i=0;i<s.size();i++) if(s[i]==t[i]) count++;
	return count;
}

string shift(string s, int i)
{
	string q;
	for(int j=i;j<s.size();j++) q.push_back(s[j]);
	for(int j=0;j<i;j++) q.push_back(s[j]);
	return q;
}

int row(string s, string t)
{
	int res=0;
	for(int i=0;i<s.size();i++) for(int j=0;j<s.size();j++) res+=h(shift(s,i),shift(t,j));
	return res;
}

void res(string s,int n, string *&st, int &d)
{
	int count=0;
	int a[26];
	int b[26];
	for(int i=0;i<26;i++) a[i]=0;
	for(int i=0;i<n;i++) a[s[i]-'A']++;
	for(int i=0;i<26;i++) if(a[i]!=0) {b[count]=i+'A';count++;}
	d=pow(count,n);
	cout<<"d="<<d<<endl;
	st=new string[d];
	cout<<"d="<<d<<endl;
	int t=d;
	cout<<"count="<<count<<endl;
	for(int i=0;i<count;i++) zap(st,i*t/count,(i+1)*t/count,char(b[i]),count,b,n,0);
	cout<<"d="<<d<<endl;
	return;
}

void zap(string *st,int r,int t,char bukv,int count,int b[],int n,int kk)
{
	if(kk<n)
	{
		cout<<kk<<endl;
		add(st,r,t,bukv);
		kk++;
		for(int i=0;i<count;i++) zap(st,r+i*(t-r)/count,r+(i+1)*(t-r)/count,char(b[i]),count,b,n,kk);
	}
	return;
}

void add(string *st, int nach, int kon, char bukv)
{
	for(int i=nach;i<kon;i++) st[i].push_back(bukv);
	return;
}