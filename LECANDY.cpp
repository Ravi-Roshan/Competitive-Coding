//https://www.codechef.com/problems/LECANDY
#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* code */

	long long t, n, c, s, temp;

	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		/* code */
		cin>>n>>c;

		s = 0;

		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>temp;
			s += temp;
		}

		if(s <= c) 
		{
			cout<<"Yes"<<endl;
		}
		else 
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
