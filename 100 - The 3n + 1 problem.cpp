#include<bits/stdc++.h>
using namespace std;



int main()
{
	int x, y;
	while(cin>>x>>y)
	{
		int ml = 0;
		cout<<x<<" "<<y<<" ";
		if(x>y)
		{
			int t = x;
			x = y;
			y = t;			
		}
		
		
		for(int i=x; i<=y; i++)
		{
			int n = i;
			int t=1;
			while(n!=1)
			{
				if(n%2==0)
					n /=2;
				else
					n = 3*n+1;
					
				t++;
			}
			if(ml<t)
				ml = t;
			
		}
		
		cout<<ml<<endl;
	}
	
	return 0;
}
