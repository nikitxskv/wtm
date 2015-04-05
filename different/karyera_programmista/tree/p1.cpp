#include "fun.h"

int main()
{
    TLink *tree=NULL,*t=NULL;
    SSpk *list=NULL;
    Add(tree,4);
    Add(tree,2);
    Add(tree,6);
    Add(tree,1);
    Add(tree,3);
    Add(tree,5);
    Add(tree,7);
    Add(t,2);
    Add(t,1);
    Add(t,3);
    //~~~~~~~~~1 zadacha~~~~~~~~~//
    
/*    if(Balance(tree)==1)cout<<"Derevo - sbalansirovanno"<<endl;
    else cout<<"Derevo - ne sbalansirovanno"<<endl;
    
    //~~~~~~~~~3 zadacha~~~~~~~~~//
    
    TLink *tree=NULL;
    int A[11]={1,2,3,4,5,6,7,8,9,10,11};
    CreateBinTree(tree,A,0,10);
    cout<<"Prtint tree:\n";
    Print(tree);
    cout<<endl;*/
    
    //~~~~~~~~~4 zadacha~~~~~~~~~//
    
/*    int d=3;//glubina
    //tree->l->r->x=0;
    Search(tree,d,list);
    while(list!=NULL)
    {
	if(list->n!=NULL)
	{
	    cout<<list->x<<"->";
	}
	else
	{
	    cout<<list->x<<"->NULL"<<endl;
	}
	list=list->n;
    }
    
    //~~~~~~~~~5 zadacha~~~~~~~~~//
    
    if(Prov(tree,tree->x)==0)cout<<"Ishodnoe derevo - derevo poiska"<<endl;
    else cout<<"Ishodnoe derevo - ne derevo poiska"<<endl;*/
    
    //~~~~~~~~~7 zadacha~~~~~~~~~//
    
    cout<<"x= "<<tree->l->l->x<<", y= "<<tree->r->r->x<<endl;
    cout<<"Obshiy predok: "<<Predok(tree,tree->l->l,tree->r->r)<<endl;

/*    //~~~~~~~~~8 zadacha~~~~~~~~~//
    
    if(dvd(tree,t)==1)cout<<"t soderzhitsya v tree\n";
    else cout<<"t ne soderzhitsya v tree\n";*/
    
    return 0;
}