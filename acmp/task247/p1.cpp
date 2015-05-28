#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N,sum=0,count=0;
	scanf("%d",&N);
	vector<int> prise(N),sale;
	for(int i=0;i<N;i++) scanf("%d",&prise[i]);
	for(int i=0;i<N;i++)
	{
		if(count==0)
		{
			sum+=prise[i];
			if(prise[i]>100) count++;
		}
		else
		{
			if(sale.size()<count)
			{
				sale.push_back(i);
			}
		}
	}
	return 0;
} 
