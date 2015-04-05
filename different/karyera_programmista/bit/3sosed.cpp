#include "fun.h"

void sosed(int s) {
    int smin,smax,k=0,i;
    
    for(i=0;i<32;++i) {
	if(bit(s,i)==1) ++k;
	if(bit(s,i)==0 && bit(s,i-1)==1) {
	    smax=s+pow(2,i);
	    smax=smax&((~1)<<(i-1));
	    k--;
	    break;
	}
    }
    for(i=0;i<32;++i) {
	if(k==0) break;
	smax+=pow(2,i);
	--k;
    }
    
    for(i=0;i<32;++i) {
	if(bit(s,i)==1) ++k;
	if(bit(s,i)==1 && bit(s,i-1)==0) {
	    smin=s-pow(2,i);
	    smin=smin&((~1)<<(i-1));
	    break;
	}
    }
    for(int j=i-1;j>=0;--j) {
	if(k==0) break;
	smin+=pow(2,j);
	--k;
    }
    
    cout<<"Max: "<<smax<<endl;
    print(smax);
    cout<<"Min: "<<smin<<endl;
    print(smin);
    return;
}