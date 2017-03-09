#include<bits/stdc++.h>
using namespace std;


int main()
{
    int p, b, h, w;

    while(cin>>p>>b>>h>>w)
    {
        int price[20], bad[1000];

        for(int i=0; i<h; i++)
        {
            cin>>price[i];
            int f = 0;
            for(int j=0; j<w; j++)
            {
                cin>>bad[j];
                if(bad[j] > p)
                    f=1;
            }

            if(f == 0)
                price[i] = 10000;
        }

        sort(price, price+h);

        int chak_b = price[0]*p;

        if(chak_b>b)
            cout<<"stay home"<<endl;
        else
            cout<<chak_b<<endl;
    }


    return 0;
}
