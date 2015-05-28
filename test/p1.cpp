#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
int main()
{
//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    int n, k=0;char x;
    long long int f;
    scanf("%ld"&f);
    scanf("%d", &n);
    scanf("%c",&x);
    int **a = new int*[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[n]; 
    }
    for (int i = 0; i < n;++i){
    for (int j = 0; j <= n; ++j){
        scanf("%c",&x);
        if(x!='\n') a[i][j] = atoi(&x);
    }
}
    if (n == 1) if (a[0][0] == 1) { cout << "1"; return 0; }
    for (int i = 1; i < n;++i)
    for (int j = 1; j < n; ++j)
    {
        if(a[i][j-1]&&a[i-1][j-1]&&a[i-1][j]&&a[i][j]) a[i][j] = min(min(a[i - 1][j], a[i - 1][j - 1]), a[i][j - 1])+1;
        k = (a[i][j] *a[i][j])>k ? (a[i][j] * a[i][j]) : k;
    }
    cout << k;
    return 0;
}