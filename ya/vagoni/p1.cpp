#include <iostream>
#include <vector>
using namespace std;
#define R 3
#define B 4
#define G 5
int vag(int red, int blue, int green, int &count, int v, int vprev);
int main()
{
	int count=0;
	vag(R,B,G,count,0,0);
	cout<<count<<endl;
	return 0;
} 

int vag(int red, int blue, int green, int &count, int v, int vprev)
{
	if(v==2&&vprev==2) return -1;
	if(red==0&&blue==0&&green==0)count++;
	if(red>0) vag(red-1,blue,green,count,1,v);
	if(blue>0) vag(red,blue-1,green,count,2,v);
	if(green>0) vag(red,blue,green-1,count,3,v);
	return 0;
}