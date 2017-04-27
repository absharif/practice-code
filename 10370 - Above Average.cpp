#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        double arr[10005];
        double sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }

        double avg = sum/n;
        double count=0;
        for(int i=0; i<n; i++)
            if(arr[i]>avg)
                count++;

        double ans = count*100/n;

        printf("%.3lf", ans);
        cout<<"%\n";
    }
    return 0;
}
