#include "fun.h"

int Prov(TLink *&tree,int d) //проверка является ли дерево - деревом поиска
{
    if(tree!=NULL)
    {
        if(tree->l!=NULL && tree->x < tree->l->x) return -1;
        if(tree->l==NULL)return 0;
        if(Prov(tree->l,tree->x-tree->l->x)<0) return -1;
        if(tree->r!=NULL && (tree->x > tree->r->x || tree->r->x > abs(d)+tree->x)) return -1;
        if(tree->r==NULL)return 0;
        if(Prov(tree->r,tree->x-tree->r->x)<0) return -1;
    }
    return 0;
}
