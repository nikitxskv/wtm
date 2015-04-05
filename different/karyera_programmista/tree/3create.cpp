#include "fun.h"

int CreateBinTree(TLink *&tree, int *A,int s,int f)
{
    if(f<s) return -1;
//    cout<<"s: "<<s<<"  "<<"f: "<<f<<endl;
    Add(tree,A[(s+f)/2]);
//    cout<<"Dob: "<<A[(s+f)/2]<<endl<<endl;
    CreateBinTree(tree,A,s,(s+f)/2-1);
    CreateBinTree(tree,A,(s+f)/2+1,f);
    return 0;
}