#include <iostream>
#include <vector>
using namespace std;
#define R 3
#define B 4
#define G 5
int vag(int red, int blue, int green, int &count, int v, int vprev, vector<char> a);
int main()
{
	int count=0;
	vector<char> a;
	vag(R,B,G,count,0,0,a);
	cout<<count<<endl;
	return 0;
} 

int vag(int red, int blue, int green, int &count, int v, int vprev, vector<char> a)
{
	if(v!=0) a.push_back(v==1?'R':v==2?'B':v==3?'G':'_');
	if(v==2&&vprev==2) return -1;
	if(red==0&&blue==0&&green==0)
	{
	    count++;
	    for(int i=0;i<a.size();i++) cout<<a[i];
	    cout<<endl;
	}
	if(red>0) vag(red-1,blue,green,count,1,v,a);
	if(blue>0) vag(red,blue-1,green,count,2,v,a);
	if(green>0) vag(red,blue,green-1,count,3,v,a);
	return 0;
}