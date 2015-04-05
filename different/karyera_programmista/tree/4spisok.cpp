#include "fun.h"

void Paste(SSpk *&list, int x)
{
    SSpk *curr=list;
    if(list==NULL)
    {
        list= new SSpk;
        list->x=x;
        list->n=NULL;
        return;
    }
    while(curr!=NULL)
    {
        if(curr->n==NULL)
        {
            curr->n= new SSpk;
            curr->n->x=x;
            curr->n->n=NULL;
            return;
        }
        curr=curr->n;
    }
}

void Search(TLink *&tree, int &g, SSpk *&list) //создание списка из элементов на одинаковой глубине
{
    if(tree!=NULL)
    {
        if(g==1)
        {
            Paste(list,tree->x);
        }
        else
        {
            Search(tree->l,--g,list);
            ++g;
            Search(tree->r,--g,list);
            ++g;
        }
    }
    return;
}