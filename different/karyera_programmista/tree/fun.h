#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<math.h>
using namespace std;

struct SSpk
{
    int x;
    SSpk *n;
};

struct TLink
{
    int x;
    TLink *l,*r;
};

void Print(TLink *&tree);

void Add(TLink *&tree,int x);

void Paste(SSpk *&list, int x);

void Search(TLink *&tree, int &g, SSpk *&list);

int Prov(TLink *&tree,int d);

int maxDepth(TLink *tree);

int minDepth(TLink *tree);

int Balance(TLink* tree);

int dvd(TLink *T, TLink *t);

int compare(TLink *T, TLink *t);

int CreateBinTree(TLink *&tree, int *A,int s,int f);

int Predok(TLink *t, TLink *x, TLink *y);

int IsLeft(TLink *t, TLink *z);

//Nahozhdenie blizhayshego obshego predka
/*
int Proverka(TLink *tree,TLink *tree1,TLink *tree2)
{
    if(tree!=NULL)
    {
	
    }
    return -1;
}

TLink* Predok(TLink *tree,TLink *tree1, TLink *tree2)
{
    TLink *a;
    if(tree!=NULL)
    {
	if(Proverka(tree->l,tree1,tree2)==1)
	{
	    a=Predok(tree->l,tree1,tree2);
	    if(a!=NULL)return a;
	}
	if(Proverka(tree->r,tree1,tree2)==2)
	{
	    a=Predok(tree->r,tree1,tree2);
	    if(a!=NULL)return a;
	}
	if(Proverka(tree,tree1,tree2)==-1)return NULL;
	else return tree;
    }
    return NULL;
}


*/







