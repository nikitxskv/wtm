#include "fun.h"

int find(int *A,int s,int f)
{
    if(A[f]==f) return f;
    return A[(f+s)/2]>=(f+s)/2?find(A,s,(f+s)/2):find(A,(f+s)/2,f);
}