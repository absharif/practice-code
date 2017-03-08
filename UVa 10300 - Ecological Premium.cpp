#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            int a[1000], b[1000], c[1000], d[1000];
            int sum = 0;
            for(int i=0; i<x; i++)
            {
                cin>>a[i]>>b[i]>>c[i];
                d[i] = a[i]*c[i];
                sum += d[i];
            }

            cout<<sum<<endl;

        }
    return 0;
}
