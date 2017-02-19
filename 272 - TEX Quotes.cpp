#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    int count =1;
    while(getline(cin, x))
    {
        int n = x.size();
        for(int i=0; i<n; i++)
            if(x[i]== 34)
            {
                if(count%2 == 0 )
                    cout<<"\'\'";
                else
                    cout<<"``";
                count++;
            }
            else
                cout<<x[i];
         cout<<endl;
    }
}
