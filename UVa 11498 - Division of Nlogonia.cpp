#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {   int t;
        cin>>t;
        int a, b;
        cin>>a>>b;
        if (t==0)
            return 0;
        while(t--)
        {
            int x, y;
            cin>>x>>y;

            if(x==a || y==b)
                cout<<"divisa\n";
            else if(x>a)
            {
                
                if(y>b)
                    cout<<"NE\n";
                else
                    cout<<"SE\n";
            }
            else
            {
               
                if(y>b)
                    cout<<"NO\n";
                else
                    cout<<"SO\n";
            }

        }
    }

    return 0;
}
