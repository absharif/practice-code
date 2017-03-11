#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        vector<string> x;
        vector<int > n;
        cout<<"Case #"<<i<<":"<<endl;
        string xx;
        int nn;

        int temp=0;
        for(int j=0; j<10; j++)
        {
            cin>>xx;
            cin>>nn;
            if(temp<nn)
            temp=nn;
            x.push_back(xx);
            n.push_back(nn);
        }

        for(int j=0; j<x.size(); j++)
        {
            if(n[j]== temp)
            {
                cout<<x[j]<<endl;
            }
        }

    }
    return 0;
}
