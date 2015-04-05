#include "fun.h"

int sz(string &arr) {
    int i,x=2;
    for(i=0;i<arr.size();i++) {
	if(arr[i]!=arr[i+1]) x+=2;
	if(i==arr.size()-1)x-=2;
    }
    if(x>arr.size()) return -1;
    string s;
    x=1;
    for(i=0;i<arr.size();i++) {
	if(arr[i]==arr[i+1]) x++;
	else {
	    s+=arr[i];
	    s+=x+'0';
	    x=1; 
	}
    }
    arr=s;
    return 0;
}