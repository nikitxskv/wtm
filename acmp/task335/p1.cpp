#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
//	freopen("INPUT.TXT","rt",stdin);
//	freopen("OUTPUT.TXT","wt",stdout);
	int N;
	cin>>N;
	vector<int> isprime(1000);
	vector<vector<long long int> > last(N+1,vector<long long int>(100,0));
	for(int i=0;i<1000;i++)
	{
		for(int j=2;j<i/2+1;j++)
		{
			if(j==i/2)
			{
				isprime[i]=1;
				if(i>100)last[3][i%100]++;
			}
			if(i%j==0) break;
		}
	}
	for(int i=4;i<=N;i++)
	{
		for(int j=11;j<100;j+=2)
		{
			//cout<<"huy\n";
			if(last[i-1][j]!=0)
			{
				for(int k=1;k<10;k+=2)
				{
					if(isprime[j*10+k]==1) last[i][(j*10+k)%100]=(last[i][(j*10+k)%100]+last[i-1][j])%(1000000000+9);
					if(k==3) k+=2;
				}
			}
		}
	}
	int res=0;
	for(int i=1;i<100;i+=2) res=(res+last[N][i])%(1000000000+9);//cout<<i<<": N=3: "<<last[3][i]<<", N=4: "<<last[4][i]<<endl;//<<", N=50: "<<last[50][i]<<endl;//res+=last[N][i];//
	cout<<res<<endl;
	
	return 0;
} 
