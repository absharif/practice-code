#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int j=1; j<=n; j++)
    {
        int x;
        cin>>x;
        int a[x+1], b[x+1], c[x+1];

        for(int i=0; i<x; i++)
        {
            cin>>a[i]>>b[i];
            c[i] = abs(abs(a[i])-abs(b[i]));
        }
        int flag = 1;
        for(int i=1; i<x; i++)
            if(c[0] != c[i])
                flag = 0;

        if(j>1)
            cout<<endl;

        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
