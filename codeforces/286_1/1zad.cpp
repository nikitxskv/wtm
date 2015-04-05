#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
void reverse(char *str,int N);
void vst(char *str,char x,int ind,int &N);
void uda(char *str,int ind,int &N);

int main()
{
	int f=0,N;

	char str1[20],str2[20];
	cin>>str1;
	strcpy(str2,str1);
	N=strlen(str1);
	reverse(str2,N);
	if(N==2)
	{
		vst(str1,str1[1],0,N);
		cout<<str1<<endl;
		return 0;
	}
	for(int i=0;i<=N/2;i++)
	{
		/*printf("Nachinaetsya iteraciya %d\n",i);
		cout<<str1<<endl;
		cout<<str2<<endl<<endl;
		cout<<"f= "<<f<<endl;*/
		if(str1[i]!=str2[i])
		{
			if(f==1||f==2)
			{
				printf("NA\n");
				return 0;
			}
			if(i+2<=N&&str1[i]==str2[i+1]&&str1[i+1]==str2[i+2])
			{
				//cout<<"Vstavlaem v S1\n";
				f=1;
				vst(str1,str2[i],i,N);
			}
			else if(i+2<=N&&str1[i+1]==str2[i]&&str1[i+2]==str2[i+1])
			{
				//cout<<"Vstavlaem v S2\n";
				f=2;
				vst(str2,str1[i],i,N);
			}
			else 
			{
				printf("NA\n");
				return 0;
			}
		}
		/*cout<<str1<<endl;
		cout<<str2<<endl;
		printf("Zakanchivaetsya iteraciya %d\n",i);*/
	}
	if(f==0)
	{
		if(N%2==1) vst(str1,str1[N/2],N/2,N);
		else vst(str1,'a',N/2,N);
		cout<<str1<<endl;
	}
	if(f==1)cout<<str1<<endl;
	if(f==2)
	{
		reverse(str2,N);
		cout<<str2<<endl;
	}
	return 0;
}

void vst(char *str,char x,int ind,int &N)
{
	for(int i=N-1;i>=ind;i--)
	{
		str[i+1]=str[i];
	}
	str[ind]=x;
	N++;
	str[N]='\0';
	return;
}

void reverse(char *str,int N)
{
	char str2[20];
	strcpy(str2,str);
	for(int i=0;i<N;i++)
	{
		str[i]=str2[N-1-i];
	}
	return;
}