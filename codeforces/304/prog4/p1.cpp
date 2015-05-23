#include <cstdio>
#include <iostream>
#include <cstring>
#include <bitset>
#include <queue>
#include <stack>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <sstream>
using namespace std;
#define N 5000009
int main()
{
	int t,a,b;
	cin>>t;
	vector<int> v(N);
	for(int i=2;i<N;i++)
	{
		if(!v[i]) for(int j=i;j<N;j+=i) v[j]=v[j/i]+1;
	}
	for(int i=2;i<N;i++) v[i]+=v[i-1];
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",v[a]-v[b]);
	}
	return 0;
}