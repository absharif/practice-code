#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int a[3];
        scanf("%d%d%d", &a[0], &a[1], &a[2]);
        sort(a, a+3);
        printf("Case %d: %d\n",i, a[1] );
    }
    return 0;
}
