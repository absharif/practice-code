#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt","w",stdout);
    string x;
    int xx=1;
    while(cin>>x)
    {
        int n;
        cin>>n;
        cout<<"Case "<<xx++<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            int a, b;
            cin>>a>>b;
            int flag = 1;
            for(int j=min(a, b); j<=max(a,b); j++)
            {
                if(x[a] != x[j])
                    flag = 0;
            }
                if(flag)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
