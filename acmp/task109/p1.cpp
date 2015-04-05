#include <iostream>
#include <vector>
using namespace std;
int main()
{
	FILE *f=fopen("INPUT.TXT","r"),*g=fopen("OUTPUT.TXT","w");
	vector<int> v,u;
	int x,y;
	char s;
	fscanf(f,"%d%c%d",&x,&s,&y);
	if(x%y==0)
	{
		fprintf(g,"%d",x/y); 
		fclose(f);
		fclose(g);
		return 0;
	}
	else
	{
		int ost,x1,ost1,cel;
		cel=x/y;
		while(1)
		{
			x1=x=x%y*10;
			ost1=ost=x%y;
			u.clear();
			while(u.size()<=y)
			{
				u.push_back(x1/y);
				if(x==(x1=x1%y*10)&&ost==(ost1=x1%y)) break;
				if(x1==0) break;
			}
			if(u.size()==y+1) v.push_back(x/y);
			if(u.size()<=y)
			{
				fprintf(g,"%d.",cel); 
				for(int j=0;j<v.size();j++) fprintf(g,"%d",v[j]); 
				if(x1!=0) fprintf(g,"("); 
				for(int j=0;j<u.size();j++) fprintf(g,"%d",u[j]); 
				if(x1!=0) fprintf(g,")\n"); 
				fclose(f);
				fclose(g);
				return 0;
			}
		}
	}
	return 0;
}