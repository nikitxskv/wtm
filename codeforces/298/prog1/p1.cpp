#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n<3) cout<<1<<endl<<1<<endl;
	else if(n==3) cout<<2<<endl<<"1 3"<<endl;
	else if(n==4) cout<<4<<endl<<"2 4 1 3"<<endl;
	else
	{
		cout<<n<<endl;
		for(int i=1;i<n+1;i+=2) cout<<i<<" ";
		for(int i=2;i<n+1;i+=2) cout<<i<<" ";
		cout<<endl;
	}
	return 0;
} 
