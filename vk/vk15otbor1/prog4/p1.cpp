
#include <vector>
#include <iostream>
#include <map>

using namespace std;

//void TGOD(vector<int> v, int *l, int *r, int *&ot, int m);
//int Wiz(int *a, int s, int e, int n);
int main()
{
	ios_base::sync_with_stdio(0);
	map < int, vector<int> > mm;
	map <int,int> dem;
	vector<int> istina;
	//FILE *f=fopen("data.txt","r");
	int n,m;
	cin>>n;
	cin>>m;
	int a;
	//for(int i=0;i<n;i++) fscanf(f,"%d",&a[i]);
	for(int i=0;i<n;i++) 
	{
		cin>>a;
		mm[a].push_back(i);
		if(mm[a].size()>=2) istina.push_back(a);
		//cin>>a[i];
		//mm[a[i]].push_back(i);
		//if(mm[a[i]].size()==2) istina.push_back(a[i]);

	}
	//int *l=new int[m];
	//int *r=new int[m];
	//int *ot=new int[m];
	int l,r,ot;
	for(int i=0;i<m;i++)
	{
		cin>>l;
		l--;
		cin>>r;
		r--;
		ot=-1;
		for(int j=0;j<istina.size();j++)
		{
			for(int k=1;k<mm[istina[j]].size();k++)
			{
				if(l<=mm[istina[j]][k-1]&&mm[istina[j]][k]<=r)
				{
					if(ot==-1 || ot>mm[istina[j]][k]-mm[istina[j]][k-1]) ot=mm[istina[j]][k]-mm[istina[j]][k-1];
				}
			}
		}
		cout<<ot<<endl;
		/*
		cin>>l[i];
		l[i]--;
		cin>>r[i];
		r[i]--;
		ot[i]=-1;
		for(int j=0;j<istina.size();j++)
		{
			for(int k=1;k<mm[istina[j]].size();k++)
			{
				if(l[i]<=mm[istina[j]][k-1]&&mm[istina[j]][k]<=r[i])
				{
					if(ot[i]==-1 || ot[i]>mm[istina[j]][k]-mm[istina[j]][k-1]) ot[i]=mm[istina[j]][k]-mm[istina[j]][k-1];
				}
			}
		}
		*/
	}


	//for(int i=0;i<istina.size();i++) TGOD(mm[istina[i]],l,r,ot,m);
	//for(int i=0;i<m;i++) cout<<ot[i]<<endl;
	//for(int i=0;i<m;i++) cout<<Wiz(a,l[i],r[i],n)<<endl;
	//fclose(f);*/
	return 0;
} 
/*
void TGOD(vector<int> v, int *l, int *r, int *&ot, int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=1;j<v.size();j++)
		{
			if(l[i]<=v[j-1]&&v[j]<=r[i])
			{
				if(ot[i]==-1 || ot[i]>v[j]-v[j-1]) ot[i]=v[j]-v[j-1];
			}
		}
	}
	return;
}*/
/*
int Wiz(int *a, int s, int e, int n)
{
	int res=n;
	map <int,int> mm;
	for(int i=s;i<e+1;i++)
	{
		if(mm[a[i-1]]!=0)
		{
			if(i-mm[a[i-1]]<res) res=i-mm[a[i-1]];
			mm[a[i-1]]=i;
		}
		else mm[a[i-1]]=i;
	}
	if(res==n) return -1;
	else return res;
}*/