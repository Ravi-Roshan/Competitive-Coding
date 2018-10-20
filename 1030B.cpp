#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int n, d, m, x, y, flag = 0;

	cin>>n>>d>>m;

	while(m > 0) {
		cin>>x>>y;

		flag  = 0;

		if(x + y - d < 0) 
			flag = 1;
		if(x + y - 2 * n + d > 0) 
			flag = 1;
		if(x - y - d > 0) 
			flag = 1;
		if(x - y + d < 0) 
			flag = 1;
		if(flag == 1)
			cout<<"NO\n";
		else 
			cout<<"YES\n";

		m--;
	}
	return 0;
}