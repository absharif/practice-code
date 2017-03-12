#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, y;
    while(cin>>n>>y && n!=-1 && y!=-1)
    {
        cout<<min(abs(n-y), abs(abs(n-y)-100))<<endl;
    }

    return 0;
}
