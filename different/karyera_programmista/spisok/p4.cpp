#include"fun.h"
#include <time.h>
int main()
 {
  SList list; int i,k=0;
  double t1,t2;
  for(i=0;i<10;i++) {list.insert(rand()%10);++k;}
 // for(i=0;i<10;i=i+1-k%2) {list.insert(i);++k;}
  //delDub(&list);
 // list.print(&list);
//  i=0;
//  cout<<endl;
 // cout<<"K: "<<(search(list.head, 5, i))->x<<endl;
    list.print(&list);
    t1=(double)clock()/(double)CLOCKS_PER_SEC;
    musor(&list, 4);
    t2=(double)clock()/(double)CLOCKS_PER_SEC;
    cout<<"Finish: \n";
    list.print(&list);
    printf("time: %lf\n",t2-t1);
    return 0;
 }