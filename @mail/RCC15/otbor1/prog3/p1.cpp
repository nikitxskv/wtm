#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>
using namespace std;
double abs(double a);

int main()
{
	vector<double> x,y1,y2;
	int proc=10,min=500000;
	double q;
	FILE *f=fopen("data.txt","r");
	FILE *g=fopen("outdata.txt","w");
	while(fscanf(f,"%lf",&q)==1)
	{
		x.push_back(q);
		if(q<min)min=q;
		fscanf(f,"%lf",&q);
		y1.push_back(q);
		if(q<min)min=q;
		fscanf(f,"%lf",&q);
		y2.push_back(q);
		if(q<min)min=q;
	}
	int n=x.size();
	int vibros=(n*proc)/100;
	double a1,a2,b1,b2;
	double sxy=0,sx=0,sy=0,sx2=0;
	min--;
	min=0;
	for(int i=0;i<n;i++)
	{
		sxy+=(x[i]-min)*(y1[i]-min);
		sx+=x[i]-min;
		sy+=y1[i]-min;
		sx2+=(x[i]-min)*(x[i]-min);
	}
	a1=(n*sxy-sx*sy)/(n*sx2-sx*sx);
	b1=(sy-a1*sx)/n;

	sxy=0,sx=0,sy=0,sx2=0;
	for(int i=0;i<n;i++)
	{
		sxy+=(x[i]-min)*(y2[i]-min);
		sx+=x[i]-min;
		sy+=y2[i]-min;
		sx2+=(x[i]-min)*(x[i]-min);
	}
	a2=(n*sxy-sx*sy)/(n*sx2-sx*sx);
	b2=(sy-a2*sx)/n;

	cout<<"a1= "<<a1<<" ,b1= "<<b1<<endl;
	cout<<"a2= "<<a2<<" ,b2= "<<b2<<endl;

	map<double,int> m1,m2;
	set<double> s1,s2;

/*	s.insert(-abs(-2.14));
	s.insert(-abs(4.14));
	s.insert(-abs(3.14));
	for(auto it=s.begin();it!=s.end();it++) cout<<abs(*it)<<endl;*/
	double pog1,pog2;
	for(int i=0;i<n;i++)
	{
		pog1=abs(y1[i]-(a1*x[i]+b1));
		pog2=abs(y2[i]-(a2*x[i]+b2));
		m1[pog1]=i;
		m2[pog2]=i;
		s1.insert(-pog1);
		s2.insert(-pog2);
	}

	auto it1=s1.begin(),it2=s2.begin();
	int a=vibros;
	for(;a>=0;it1++,it2++,a--)
	{
		y1[m1[abs(*it1)]]=-1;
		y2[m2[abs(*it2)]]=-1;
	}
	double si=0,sigma1,sigma2;
	for(;it1!=s1.end();it1++) si+=(*it1)*(*it1);
	sigma1=sqrt(si/(n-vibros));
	si=0;
	for(;it2!=s2.end();it2++) si+=(*it2)*(*it2);
	sigma2=sqrt(si/(n-vibros));
	cout<<"Sigma1= "<<sigma1<<endl;
	cout<<"Sigma2= "<<sigma2<<endl;

	//for(int i=0;i<n;i++) cout<<x[i]<<" "<<y1[i]<<" "<<y2[i]<<endl;
	fprintf(g,"Y1:\n");
	for(int i=0;i<n;i++) if(y1[i]!=-1) fprintf(g,"%.0lf\t%.0lf\n",x[i],y1[i]);
	fprintf(g,"Y2:\n");
	for(int i=0;i<n;i++) if(y2[i]!=-1) fprintf(g,"%.0lf\t%.0lf\n",x[i],y2[i]);
	return 0;
}

double abs(double a)
{
	if(a>=0) return a;
	else return -a;
}