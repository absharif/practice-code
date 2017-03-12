#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    char xy[1000][1000] {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    vector<string>x;
    string xx;

    for(int i=0; i<n; i++)
    {
        cin>>xx;
        x.push_back(xx);
    }

    int j=0;
    int i=0;
    int jj=0;
    while(1)
    {
        if(i%16==0 && jj>=n)
            break;
        if(j%n==0)
            j %= n;

        if(i%16==0)
            i %= 16;

        cout<<x[j++]<<": "<<xy[i++]<<endl;
        jj++;
    }

    return 0;
}
