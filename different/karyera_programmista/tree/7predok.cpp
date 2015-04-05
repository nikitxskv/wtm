#include "fun.h"

int Predok(TLink *t, TLink  *x, TLink *y)
{
    if(t!=NULL)
    {
	int X=IsLeft(t->l,x), Y=IsLeft(t->l,y);
	if((t->l==x || t->l==y) && X==1 && Y==1) return t->x;
	if((t->r==x || t->r==y) && X==0 && Y==0) return t->x;
        if(X==1 && Y==1) return Predok(t->l,x,y);
        if(X==0 && Y==0) return Predok(t->r,x,y);
        return t->x;
    }
    return 0;
}

int IsLeft(TLink *t, TLink *z)
{
    if(t!=NULL)
    {
	if(t==z) return 1;
	if(IsLeft(t->l,z)==1) return 1;
	if(IsLeft(t->r,z)==1) return 1;
    }
    return 0;
}