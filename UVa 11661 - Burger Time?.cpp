#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin>>n &&  n!= 0)
	{
		int r=0, d=0, ned=n;
		string x;
		cin>>x;
		int z = 0;

			for(int i=0; i<n; i++)
			{
				
				if(x[i] == 'R')
				{
					r = i+1;
					if(d)
					{
						if((r-d)<ned)
							ned = r-d;
					}
				}
				else if(x[i] == 'D')
				{
					d=i+1;
					if(r)
					{
						if((d-r)<ned)
							ned = d-r;
					}
				}
				else if(x[i] == 'Z')
					{
						z=1;
					}
			}
			
			if(z)
				cout<<"0"<<endl;
			else
				cout<<ned<<endl;
	}
	
	return 0;
}
