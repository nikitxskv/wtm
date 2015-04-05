#include<string.h>
#include <limits>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
 cout<<sizeof(unsigned)<<endl;
    cout<<"Наибольшее число с плавающей точкой=="<<numeric_limits<unsigned>::max()<<endl;
    cout<<"Наименьшее число с плавающей точкой=="<<numeric_limits<unsigned>::min()<<endl;
    printf("%hhd\n",numeric_limits<char>::min());
    string str;
    int N;
    cin>>N;
    //cin.get();
    getline(cin,str);
    getline(cin,str);
    cout<<str<<endl;
    //scanf("%s",str);
    //cout<<strlen(str)<<endl;
    //for(int i=0;i<strlen(str);++i) cout<<str[i];
    //cout<<endl;
    //cout<<sizeof(*str)<<endl;
    //cout<<str<<endl;
  return 0;
 }