#include <iostream>
using namespace std;

int main()
{
	FILE*f=fopen("data.txt","w");
	for(int i=0;i<500000;i++) fprintf(f,"%d ",1);
	fprintf(f,"\n");
	for(int i=0;i<500000;i++) fprintf(f,"%d %d\n",1,500000);
	fclose(f);
	return 0;
} 
