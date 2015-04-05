#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int min(int x, int y);
int modul(int x);
int main()
{
	ifstream in;
	ofstream out;
	in.open("INPUT.TXT");
	out.open("OUTPUT.TXT");
	int n,x;
	in>>n;
	vector<int> v,e;
	for(int i=0;i<n;i++)
	{
		in>>x;
		v.push_back(x);
	}
	e.push_back(0);
	for(int i=1;i<n;i++)
	{
		if(i==1) e.push_back(modul(v[0]-v[1]));
		else e.push_back(min(e[i-1]+modul(v[i-1]-v[i]),e[i-2]+modul(3*(v[i-2]-v[i]))));
	}
	out<<e[e.size()-1];
	in.close();
	out.close();
	return 0;
} 

int modul(int x)
{
	return x>=0?x:-x;
}

int min(int x,int y)
{
	return x<y?x:y;
}