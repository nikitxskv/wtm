#include "fun.h"

void Print(TLink *&tree)
{
    if(tree!=NULL)
    {
        Print(tree->l);
        cout<<tree->x<<endl;
        Print(tree->r);
    }
    return;
}