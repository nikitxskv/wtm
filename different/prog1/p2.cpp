#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    for(int i=0;i<s1.size();++i)
    {
	if(s1[i]!=' ') s2+=s1[i];
	else s2+="%20";
    }
    cout<<s2<<endl;
    return 0;
}