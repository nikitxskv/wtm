#include "fun.h"

int smena(int a) {
    int ap=a>>1;
    for(int i=1;i<32;i+=2) {
	ap = (ap&(~(1<<i))) | ((a<<1)&(1<<i));
    }
    return ap;
}



