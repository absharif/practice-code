#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        int n, xx[10000];
        cin>>n;

        for(int i=0; i<n; i++)
            cin>>xx[i];

        sort(xx, xx+n);

        cout<<"Case "<<tt<<": "<<xx[n-1]<<" "<<endl;
    }
    return 0;
}
