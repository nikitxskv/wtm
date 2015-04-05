#include <iostream>
using namespace std;

int main()
{
	int n,m,count=0;
	cin>>n;
	cin>>m;
	for(int i=n,j=m;j+i>=3&&i>0&&j>0;)
	{
		if(i<j)
		{
			count++;
			i--;
			j-=2;
		}
		else
		{
			count++;
			i-=2;
			j--;
		}
	}
	cout<<count<<endl;
	return 0;
} 
