#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c;
    int x= 1;
    while(cin>>n>>m>>c && c!=0 && m!=0 && n!=0)
    {
        int nnn[10000], nn[10000], mm[10000];
        for(int i=0; i<n; i++)
        {
            cin>>nn[i];
            nnn[i] =0;
        }


        int sta = 0;
        int f = 0;
        int p;
        int max=0;
        for(int i=0; i<m; i++)
        {
            cin>>mm[i];
            p = mm[i]-1;

            if(nnn[p] == 0)
            {
                nnn[p] = 1;
                sta += nn[p];
            }
            else
            {
                nnn[p] = 0;
                sta -= nn[p];
            }

            if(max<sta)
                max=sta;

            if(sta>c)
                f=1;
        }

        cout<<"Sequence "<<x++<<endl;
        if(f)
            cout<<"Fuse was blown."<<endl<<endl;
        else
        {
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes."<<endl<<endl;
        }
    }
    return 0;
}
