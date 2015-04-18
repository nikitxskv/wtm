#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
#define N 250
vector<int> sum(vector<int> a, vector<int> b);
vector<int> mult(vector<int> a, vector<int> b);
int main()
{
	freopen("INPUT.TXT", "rt", stdin);
	freopen("OUTPUT.TXT", "wt", stdout);
	int n,i;
	cin>>n;
	vector<int> w(N);
	w[0]=1;
	vector<vector<int> > u(n+1,w);
	if(n>1) u[2][0]=2;
	for(i=3;i<n+1;i++) u[i]=sum(u[i-1],u[i-2]);
	u.back()=mult(u.back(),u.back());
	for(i=2*N;i>=0;i--) if(u.back()[i]!=0) break;
	for(;i>=0;i--) cout<<u.back()[i];
	cout<<endl;
	return 0;
} 

vector<int> sum(vector<int> a, vector<int> b)
{
	vector<int> c(N);
	int p=0;
	for(int i=0;i<N;i++)
	{
		c[i]=a[i]+b[i]+p;
		p=c[i]/10;
		c[i]=c[i]%10;
	}
	return c;
}

vector<int> mult(vector<int> a, vector<int> b)
{
	vector<int> c(a.size()+b.size()+1);
	for(int ia=0;ia<a.size();ia++) for(int jb=0;jb<b.size();jb++) c[ia+jb]+=a[ia]*b[jb];
	for (int i=0;i<c.size()-1;i++)
	{
	    c[i+1]+=c[i]/10;
	    c[i]%=10;
	}
	return c;
}
