//C++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin>>t;
    while(t--)
       {
           cin>>a>>b;
           if(a<b)
            cout<<"<";
           else if(a>b)
            cout<<">";
           else
            cout<<"=";

           cout<<endl;
       }
    return 0;
}
