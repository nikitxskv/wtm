#include <vector>
int max(int x,int y){return x>y?x:y;}
int main()
{
	FILE *f=fopen("INPUT.TXT","r"),*g=fopen("OUTPUT.TXT","w");
	int n,i,j,ml=0;
	fscanf(f,"%d",&n);
	std::vector<int> v(n),l(n);
	for(i=0;i<n;i++) fscanf(f,"%d",&v[i]);
	l[0]=1;
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--) if(v[i]>v[j]) l[i]=max(l[j],l[i]); 
		l[i]++;
		ml=max(ml,l[i]);
	}
	fprintf(g,"%d",ml);
	return 0;
}