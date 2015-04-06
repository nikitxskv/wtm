#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int max(int x,int y);

int main()
{
	ifstream in;
	ofstream out;
	in.open("INPUT.TXT");
	out.open("OUTPUT.TXT");
	int n,x,j,f,maxlength=0;
	in>>n;
	vector<int> v,length;
	for(int i=0;i<n;i++)
	{
		in>>x;
		v.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		if(i==0) length.push_back(1);
		else
		{
			length.push_back(0);
			for(j=i-1;j>=0;j--) if(v[i]>v[j]) length[i]=max(length[j],length[i]); 
			length[length.size()-1]++; 
		} 
		maxlength=max(maxlength,length[i]);
	}
	out<<maxlength;
	return 0;
}

int max(int x,int y)
{
	return x>y?x:y;
}