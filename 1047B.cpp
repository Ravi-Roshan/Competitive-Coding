#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int n, s = 0, max = 0, x, y;
	cin>>n;

	while(n > 0) {
		cin>>x>>y;
		s = x + y;

		if(s >= max) {
			max = s;
		}

		n--;
	}

	cout<<max<<"\n";

	return 0;
}