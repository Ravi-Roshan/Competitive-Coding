#include<bits/stdc++.h>

using namespace std;

long long s(long long int n) {
	long long int d, sum = 0;
	while(n != 0) {
		d = n % 10;
		sum += d;
		n /= 10;
	}
	return sum;
}

int main() {
	long long int n, a = 9, b, sum = 0;

	cin>>n;

	while(1 == 1) {
		if(a <= n) {

		}
		else {
			a /= 10;
			break;
		}
		a *= 10;
		a += 9;
	}

	b = n - a;

	// cout<<a<<" "<<b<<"\n";

	sum = s(a);
	sum += s(b);

	cout<<sum<<"\n";

	return 0;
}