#include <iostream>
using namespace std;

int main()
{
 	int n,*a;
 	a=new int[n];
 	cin>>n;
    for (int i=0;i<n;i++)cin >> a[i];

    int sum=-1000000000;
    for (int i=1;i<=n/3;i++)
    {
        if (n%i)
            continue;
        for (int j=0;j<i;j++)
        {
            int s=0;
            for (int k=j;k<n;k+=i)
            {
                s+=a[k];
            }
            sum=max(sum,s);
        }
    }

    cout<<sum<<endl;
	return 0;
} 
/*
#include <iostream>

using namespace std;

int n;
int t[20000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int best = -1000000000;
    for (int i = 1; i <= n/3; i++) {
        if (n % i)
            continue;
        for (int st = 0; st < i; st++) {
            int sum = 0;
            for (int j = st; j < n; j += i) {
                sum += t[j];
            }
            best = max(sum, best);
        }
    }

    cout << best << "\n";
}*/