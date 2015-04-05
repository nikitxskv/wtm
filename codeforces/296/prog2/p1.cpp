#include <iostream>
using namespace std;

void f(int n,char a,char b,char c)
{
    if(n>0)
    {
	f(n-1,c,a,b);
	printf("%d %c %c %c   ",n,a,b,c);
    }
}

int main()
{
	f(3,'x','y','z');
	return 0;
} 
