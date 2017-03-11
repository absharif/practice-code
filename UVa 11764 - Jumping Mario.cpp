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

        int h=0, l=0;

        for(int i=1; i<n; i++)
        {
            if(xx[i-1] < xx[i])
                h++;
            else if(xx[i-1]>xx[i])
                l++;
        }
        cout<<"Case "<<tt<<": "<<h<<" "<<l<<endl;
    }
}
