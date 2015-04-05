#include "fun.h"

int bit(int x,int j) {
    if(j<0) return -1;
    if((x&(1<<j))==0) return 0;
    return 1;
}

int find(int *A, int N) {
    for(int i=0;i<N;i++) {
	if(bit(A[i],0)!=i%2) return A[i]-1;
    }
    return N;
}