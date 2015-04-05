#include "fun.h"

void Add(TLink *&tree,int x)
{
    if(tree==NULL)
    {
        tree=new TLink;
        tree->x=x;
        tree->l=NULL;
        tree->r=NULL;
    }
    else
    {
        if(x<=tree->x) Add(tree->l,x);
        else Add(tree->r,x);
    }
    return;
}