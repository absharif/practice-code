#include<bits/stdc++.h>
using namespace std;

int rec(int n)
{
    while(n>9)
    {
        int sum=0;
        while(n!=0)
        {
            int t = n%10;
            n /=10;
            sum += t;
        }
        n = sum;
    }

    return n;
}

int main()
{
        int n;
        while(cin>>n && n!=0)
        {
            int sum;
            sum = rec(n);
            cout<<sum<<endl;
        }
    return 0;
}
