#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int nn[10000];
        int m=0, j=0;
        for(int k=0; k<n; k++)
        {
            cin>>nn[k];

                m += nn[k]/30;
                m++;

                j += nn[k]/60;
                j++;

        }

        m = m*10;
        j = j*15;

        cout<<"Case "<<i<<": ";
        if(m>j)
            cout<<"Juice "<<j<<endl;
        else if(m<j)
            cout<<"Mile "<<m<<endl;
        else
            cout<<"Mile Juice "<<m<<endl;
    }

    return 0;
}
