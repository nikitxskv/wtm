#include <iostream>
using namespace std;

int main()
{
	int vl,vr,d,s=0,il=1,ir;
	cin>>vl>>vr>>ir>>d;
	while(ir-il>1)
	{
		vl<vr?s+=vl:s+=vr;
		vl<vr?vl+=d:vr+=d;
		vl<vr?il++:ir--;
	}
	s=s+vl+vr;
	cout<<s<<endl;
	return 0;
} 
