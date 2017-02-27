#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        ll x = (((((n*567)/9)+7492)*235)/47)-498;
        x = (x/10)%10;

        printf("%d\n", abs(x) );
    }
    return 0;
}
