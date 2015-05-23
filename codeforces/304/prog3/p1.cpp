#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int main()
{
	int n=0,n1,n2,l,count=0,a,b;
	queue<int> q1,q2;
	cin>>n1>>n1;
	for(int i=0;i<n1;i++) cin>>l, q1.push(l);
	cin>>n2;
	for(int i=0;i<n2;i++) cin>>l, q2.push(l);
	while(1)
	{
		a=q1.front(), b=q2.front();
		q1.pop(), q2.pop();
		if(a>b) q1.push(b), q1.push(a);
		else q2.push(a), q2.push(b);
		count++;
		if(q1.size()==0||q2.size()==0) break;
		n++;
		if(n>1000000)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<count<<" "<<(q1.size()>0?1:2)<<endl;
	return 0; 
} 
