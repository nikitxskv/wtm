#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
#define N 220
vector<int> sum(vector<int> a, vector<int> b);
int main()
{
	freopen("INPUT.TXT","rt",stdin);
	freopen("OUTPUT.TXT","wt",stdout);
	int n,i;
	cin>>n;
	vector<int> w(N);
	vector<vector<int> > v(n+1,w);
	v[0][0]=1;
	v[1][0]=2;
	for(i=2;i<v.size();i++) v[i]=sum(v[i-1],v[i-2]);
	for(i=v.back().size()-1;i>=0;i--) if(v.back()[i]!=0) break;
	for(;i>=0;i--) cout<<v.back()[i];
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