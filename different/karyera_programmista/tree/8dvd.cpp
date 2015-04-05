#include "fun.h"

int compare(TLink *T, TLink *t)
{
    if(T==NULL && t==NULL) return 1;
    if(!t!=!T) return 0;
    if(T->x==t->x)
    {
	if(compare(T->l,t->l)==0) return 0;
	if(compare(T->r,t->r)==0) return 0;
    }
    return 1;
}

int dvd(TLink *T, TLink *t)
{
    if(T!=NULL && t!=NULL)
    {
	if(T->x==t->x)
	{
	    if(compare(T,t)==1) return 1;
	}
	else
	{
	    if(dvd(T->l,t)==1) return 1;
	    if(dvd(T->r,t)==1) return 1;
	}
    }
    return 0;
}