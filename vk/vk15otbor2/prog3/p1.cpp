#include <iostream>
using namespace std;
int find(string name, string str, int start);
int main()
{
	int count=0;
	string name,str;
	cin>>name>>str;
	int j=0;
	int x;
	for(int i=0;i<str.size();i++)
	{
		if(j==name.size())
		{
			x=find(name,str,i);
			if(x>=0) count=x-i+1;
			break;
		}
		if(str[i]==name[j]) j++;
	}
	cout<<count<<endl;
	return 0;
} 

int find(string name, string str, int start)
{
	int j=name.size()-1;
	for(int i=str.size()-1;i>=start;i--)
	{
		if(str[i]==name[j])
		{
			if(j==0) return i;
			j--;
		}
	}
	return -1;
}
