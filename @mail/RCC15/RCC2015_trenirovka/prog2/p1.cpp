#include <iostream>
#include <map>
#include <set>
#include <fstream>
using namespace std;

int main()
{
	ifstream in;
	in.open("data.dat");
	int C1,C2,n,m,a,b,bill=0;
	map<int,int> money,boxes1,boxes2;
	set<int> box;
	in>>C1>>C2>>n;
	for(int i=0;i<n;i++)
	{
		in>>a>>b;
		money[b]+=a;
		box.insert(b);
	}
	in>>m;
	for(int i=0;i<m;i++)
	{
		in>>a>>b;
		boxes1[a]=b;
		boxes2[b]=a;
		box.insert(a);
		box.insert(b);
	}
	int count=0;
	for(auto t=box.begin();t!=box.end();t++)
	{
		bill+=money[*t];
		if(boxes1[*t]!=0)
		{
			if(bill>=C1)
			{
				count++;
				boxes2[boxes1[*t]]=0;
				bill-=C1;
			}
		}
		if(boxes2[*t]!=0)
		{
			if(bill>=C2)
			{
				count++;
				bill-=C2;
			}
		}
	}
	cout<<count<<endl;
	in.close();
	return 0;
} 
