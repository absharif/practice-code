#include<bits/stdc++.h>
using namespace std;

int find_number(string a)
{
    int len=a.size();
    int sum=0;
    int c=1;
   while(len>1)
   {

       sum=0;
       for(int i=0; i<a.size(); i++)
       {
        //cout<<a[i]<<" ";
        if(a[i]>='a' && a[i]<='z')sum+=(a[i]-'a')+1;
        else if(a[i]>='A' && a[i]<='Z')sum+=(a[i]-'A')+1;

        if(c>1)
            if(a[i]>='0' && a[i]<='9')sum+=a[i]-'0';

       }
       //cout<<sum<<endl;
       a.clear();
       while(sum)
       {
           a+=(sum%10)+'0';
           sum=sum/10;
       }
       len=a.size();
      if(len==1)break;

      c++;
   }
   //cout<<atoi(a.c_str())<<endl;
   return atoi(a.c_str());
}

int main()
{
    string x, y;
    while(getline(cin, x))
    {
        getline(cin, y);
        //(x/100)*y
        cout<<fixed<<setprecision(2)<<(double)(min(find_number(x),find_number(y))*100)/max(find_number(x),find_number(y))<<" %"<<endl;
    }
    return 0;
}
