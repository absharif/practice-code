#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int j=1;
   while(1)
   {
       int n;
       cin>>n;

        if(n==0)
            return 0;

       int x;
       int count=0;
       for(int i=0; i<n; i++)
       {
           cin>>x;
           if(x==0)
            count++;
       }
       cout<<"Case "<<j<<": ";
       int xx = n-count;
       cout<<xx-count<<endl;
    j++;
   }



    return 0;
}
