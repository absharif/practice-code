#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {


        string x;
        cin>>x; //input string

        int l = x.size(); //calculating size of string
        //cout<<l<<endl;
        if((x[0]=='1' || x[0]=='4' || (x[0]=='7' && x[1]== '8')) && l<3)
                cout<<"+\n";
        else if(x[l-1]=='5' && x[l-2]=='3')
                cout<<"-\n";
        else if(x[0]=='9' && x[l-1]=='4')
                cout<<"*\n";
        else
                cout<<"?\n";
    }
    return 0;
}
