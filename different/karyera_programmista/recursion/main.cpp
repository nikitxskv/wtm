#include "fun.h"

int main()
{

//~~~~~~~ 1 zadacha ~~~~~~~//

/*    int n=0,k=0;
    up(n,k);//n-current step;k-varianti;
    cout<<"K = "<<k<<endl;*/
    
//~~~~~~~ 2 zadacha ~~~~~~~//

/*    int X,Y,k,Bx,By;
    cout<<"Vvedite X: ";
    cin>>X;
    cout<<"Vvedite Y: ";
    cin>>Y;
    cout<<"Vvedite Bx: ";
    cin>>Bx;
    cout<<"Vvedite By: ";
    cin>>By;
    step(0,0,X,Y,k,Bx,By);
    cout<<"Kol-vo vozmozhnih variantov: "<<k<<endl;*/

//~~~~~~~ 3 zadacha ~~~~~~~//

/*    int A[11]={-10,-5,2,2,2,3,4,8,9,12,13};
    cout<<"K = "<<find(A,0,(sizeof(A)/4)-1);*/

//~~~~~~~ 5 zadacha ~~~~~~~//

    char *s = "123";
    cout<<"Ishodnaya stroka: "<<s<<endl;
    int n=fact(strlen(s));//schitaem faktorial
    char **ss=new char*[n];
    for(int i=0;i<n;i++)
    {
	ss[i]=new char[strlen(s)];
    }
    
    perestanovka(s,ss,1,strlen(s));
    
    cout<<"Vsevozmojnie perestanovki:"<<endl;
    for(int i=0;i<n;i++) cout<<ss[i]<<endl;

//~~~~~~~ 6 zadacha ~~~~~~~//

/*    int x;
    cout<<"vvedite kol-vo skobok:";
    cin>>x;
    skobki(x,1);*/
    
    return 0;
}