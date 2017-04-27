#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tt = 1; tt<=t; tt++)
    {
        int x, y;
        cin>>x>>y;
        int sum = 0;
        for(int i = x; i<=y; i++)
        {
            if((i%2)!=0)
                sum+= i;
        }

        cout<<"Case "<<tt<<": "<<sum<<endl;
    }

    return 0;
}
