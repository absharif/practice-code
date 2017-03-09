#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int nn, nnn[10000];
        for(int i=0; i<n; i++)
        {
            char x;
            cin>>x;
            if(x=='L')
            {
             scanf("EFT");
             nnn[i] = -1;
            }
            else if(x=='R')
            {
                scanf("IGHT");
                nnn[i] = 1;
            }
            else
            {
                scanf("AME AS %d", &nn);
                nnn[i] = nnn[nn-1];
            }
        }

        int sum = 0;
        for(int i=0; i<n; i++)
            sum += nnn[i];

        cout<<sum<<endl;
    }
    return 0;
}
