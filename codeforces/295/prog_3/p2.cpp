#include<iostream>
using namespace std;
long long fact(long long n)
{
 return (n<=1?1:n*fact(n-1));
} 
int main()
{
 string a;
 int i;
 long long n;
 cin>>a;
 int ascii[26];
 for(i=0;i<26;++i) ascii[i]=0;
 for(i=0;i<a.size();++i) ++ascii[a[i]-'A'];
 n=fact(a.size());
 for(i=0;i<26;++i)
 if(ascii[i]>1) n/=fact(ascii[i]);
 cout<< n<<endl;
 return 0;
}