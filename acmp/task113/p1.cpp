#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int N,result=0,ms;
	string ch;
	cin>>N;
	vector<int> a(N);
	vector<vector<int> > v(N,a),s(N,a);
	for(int i=0;i<N;i++) 
	{
		cin>>ch;
		for(int j=0;j<N;j++) v[i][j]=int(ch[j]-'0');
	}
	for(int i=0;i<N;i++) for(int j=0;j<N;j++)
	{
		if(v[i][j]==0) s[i][j]=0;
		else
		{
			ms=i>0&&j>0?min(s[i-1][j-1],min(s[i][j-1],s[i-1][j])):v[i][j];
			s[i][j]=(i>0&&j>0&&ms>0?(pow(sqrt(ms)+1,2)):v[i][j]);
			result=max(result,s[i][j]);
		}
	}
	cout<<result<<endl;
	return 0;
}
