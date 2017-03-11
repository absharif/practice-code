#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {
                cout<<"Lumberjacks:\n";
        for(int tt=1; tt<=t; tt++)
        {
            int xx[10000];
            int u = 0, o = 0;
            for(int i=0; i<10; i++)
                cin>>xx[i];

            for(int i=1; i<10; i++)
            {
                if(xx[i-1] >= xx[i])
                    u++;

                if(xx[i-1] <= xx[i])
                    o++;
            }
            if(o==9 || u==9)
                cout<<"Ordered\n";
            else
                cout<<"Unordered\n";
        }
    }
    
    return 0;
}
