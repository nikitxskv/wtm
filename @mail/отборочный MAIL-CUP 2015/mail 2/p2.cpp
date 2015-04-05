#include <iostream>
using namespace std;
int main()
{
	int n,*a,*b,*c,k=0,x,f=0;
	cin>>n;
	a=new int[n];
	b=new int[n];
	c=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=i;
	}
	
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	for (int i=0;i<n;++i)
	{
 		for (int j=0;j<n;++j)
 		{
  			if (a[i]%3<a[j]%3)
  			{
   				x=a[j];
  				a[j]=a[i];
    			a[i]=x;
    			x=b[j];
  				b[j]=b[i];
    			b[i]=x;
   			}
  		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<a[i]%3<<" ";
	}
	cout<<endl;

	for(int i=0;i<n;i++)
	{
		if(a[i]%3==0)
		{
			c[k]=b[i];
			++k;
		}
		if(i+2<n&&a[i]%3==1&&a[i+1]%3==1&&a[i+2]%3==1)
		{
			c[k]=b[i];
			c[k+1]=b[i+1];
			c[k+2]=b[i+2];
			i+=2;
			k+=3;
		}
		if(f==0&&i+1<n&&a[i]%3==1&&a[i+1]%3==2)
		{
			c[k]=b[i];
			c[k+1]=b[i+1];
			++i;
			k+=2;
		}
		if(i+2<n&&a[i]%3==1&&a[i+2]%3==2)
		{
			c[k]=b[i];
			c[k+1]=b[i+2];
			k+=2;
			if(f==1)i+=2;
			else f=1;
		}
		if(i+2<n&&a[i]%3==2&&a[i+1]%3==2&&a[i+2]%3==2)
		{
			c[k]=b[i];
			c[k+1]=b[i+1];
			c[k+2]=b[i+2];
			i+=2;
			k+=3;
		}
	}

	for (int i=0;i<k;++i)
	{
 		for (int j=0;j<k;++j)
 		{
  			if (c[i]<c[j])
  			{
   				x=c[j];
  				c[j]=c[i];
    			c[i]=x;
   			}
  		}
	}

	cout<<k<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<c[i]+1<<" ";
	}
	cout<<endl;
	return 0;
}