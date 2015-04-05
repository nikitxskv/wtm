#include <iostream>
using namespace std;

int main()
{
	int t;
	int a[100000];
	int prov[100000];
	int u=0,kk=0,c1=0,c2=0,m,k,pl,fc;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int u=0;
		int kk=0;
		int c1=0;
		int c2=0;
		int m;
		int k;
		int pl;
		int fc;
		cin>>m;
		cin>>k;
		for (int w=0;w<k;w++) cin>>a[w];
		for (int w=0;w<m-1;w++)
		{
			cin>>pl;
			cin>>fc;
			pl--;
			if((fc==1) && (kk==0))
			{
				int index;
				kk=1;
				for(int j=0;j<k;j++)
				{
					if (a[j]-u<=0)
					{
						prov[c1]=j;
						c1++;
						c2++;
						index=j;
					}

				}
				if(c1==1)
				{
					u-=a[index];
					a[index]=0;
				}
			}
			if(pl==-1) u++;
			else a[pl]--;
			for(int j=0;j<c1;j++)
			{
				if(pl==prov[j])
				{
					c2--;
					prov[j]=-1;
				}
			}
		}
		if(c2==1)
		{
			for(int w=0;w<c1;w++)
			{
				if(prov[w]>-1)
				{
					u-=a[prov[w]];
					a[prov[w]]=0;
				}
			}
		}
		for(int w=0;w<k;w++)
		{
			a[w]-=u;
			if(a[w]>0) cout<<"N";
			else cout<<"Y";
		}
		cout<<endl;
	}
	return 1;
}
