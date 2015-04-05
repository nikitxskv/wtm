#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<fstream>
#include<map>
#include<set>
#include<iterator>
#include<math.h>
#include<time.h>
using namespace std;

int main()
{
	clock_t time;
	time=clock();
	ifstream in;
	in.open("data.txt");
	double c,real,approx,error;
	double mean = 0.0,s=0.0;
	int t, n,i,j,m,k1=0,T;
	in >> n >> T >> c;
	double *x = new double[n];
	for (i = 0; i < n; ++i) in >> x[i];
	in >> m;
	int *y = new int[m];
	for (i = 0; i < m; ++i) in >> y[i];
	
	for (j = k1; j < y[0]; ++j)
	{
		mean = (mean + x[j] / T) / c;
	}
	approx = mean;
	for (j = y[0] - T; j < y[0]; ++j)
		s += x[j];
	real = s / T;
	error = fabs(approx - real) / real;
	printf("%.6lf %.6lf %.6lf\n", real, approx, error);
	k1 = y[0];

	for (i = 1; i < m; ++i)
	{
		for (j = k1; j < y[i]; ++j)
		{
			mean = (mean + x[j] / T) / c;
		}
		approx = mean;
		for (j = y[i - 1]; j < y[i]; ++j)
		{
			s += x[j];
			s -= x[j - T];
		}
		real= s / T;
		error = fabs(approx - real) / real;
		printf("%.6lf %.6lf %.6lf\n", real, approx, error);
		k1 = y[i];
	}
	in.close();
	time=clock()-time;
	printf("%f\n", (double)time / CLOCKS_PER_SEC);
		return 0;
}