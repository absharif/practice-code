#include<bits/stdc++.h>
using namespace std;

int sum_undil_one_digit(string s)
{
	
		int sum = 0;
		int l = s.size();

		for(int i= 0; i<l; i++)
		{
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				//printf("%d", s[i]-96);
				sum += s[i]-96;
			}
			else if(s[i] >= 'A' && s[i] <= 'Z')
			{
				//printf("%d", (s[i]-64));
				sum += s[i]-64;
			}
		}
		
		while(sum>9)
		{
			int t=0;
			while(sum != 0)
			{
				t += sum% 10;
				sum /= 10;
			}
			sum = t;
		}
		
		return sum;
}

int main()
{
	string s, ss;
	
	while(getline(cin, s))
	{	
		getline(cin,ss);
		double x, y;
		x = sum_undil_one_digit(s);
		y = sum_undil_one_digit(ss);
		
		double r;
		if(x>y)
			r = y/x;
		else
			r = x/y;
			
			
		printf("%.2lf %%\n", r*100.0);
		
	}
	
	return 0;
}
