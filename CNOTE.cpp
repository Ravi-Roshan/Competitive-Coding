//https://www.codechef.com/problems/CNOTE
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	/* code */
	long long t, x, y, k, n, p, c, flag = 0;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		/* code */
		cin>>x>>y>>k>>n;flag = 0;
		for (int j = 0; j < n; ++j)
		{
			/* code */
			cin>>p>>c;
			if (c <= k && x <= (p+y))
			{
				/* code */
				flag = 1;
			}
		}
		if(flag == 1)
			cout<<"LuckyChef\n";
		else
			cout<<"UnluckyChef\n";
	}
	return 0;
}