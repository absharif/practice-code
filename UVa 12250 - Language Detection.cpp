#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string x;
    int i=1;
    while(cin>>x)
    {
        if(x=="#")
            return 0;
        cout<<"Case "<<i<<": ";
        if(x=="HELLO")
            cout<<"ENGLISH\n";
        else if(x=="HOLA")
            cout<<"SPANISH\n";
        else if(x=="HALLO")
            cout<<"GERMAN\n";
        else if(x=="BONJOUR")
            cout<<"FRENCH\n";
        else if(x=="CIAO")
            cout<<"ITALIAN\n";
        else if(x=="ZDRAVSTVUJTE")
            cout<<"RUSSIAN\n";
        else
            cout<<"UNKNOWN\n";
        i++;
    }

    return 0;
}
