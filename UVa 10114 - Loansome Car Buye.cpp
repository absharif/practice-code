#include<bits/stdc++.h>
using namespace std;

int main()
{
    double mo, dwp, lone, ins;
    while(cin>>mo>>dwp>>lone>>ins && mo>-1)
    {
        double x[101], xx[100];

        for(int i=0; i<ins; i++)
        {
            cin>>x[i]>>xx[i];
        }
        double monthly = lone/mo;
        double car = lone+dwp;
        int month=0;
        int j=0;
        double dip;
        dip = xx[j++];
        car -= car*dip;
        while(lone>=car)
        {
            month++;
            lone -= monthly;
            if(month == x[j])
                dip = xx[j++];

            car -= car*dip;



        }
        cout<<month;
        if(month==1)
            cout<<" month"<<endl;
        else
            cout<<" months"<<endl;
    }


    return 0;
}
