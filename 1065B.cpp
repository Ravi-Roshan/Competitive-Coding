#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int n, m, maxa1, maxa2, mina;

	cin>>n>>m;

	if(2*m >= n) {
		mina = 0;
	}
	else {
		mina = n - 2*m;
	}

	maxa1 = n - (1 + sqrt(1 + 8 * m)) / 2;
	maxa2 = (1 - sqrt(1 + 8 * m)) / 2;

	if(maxa2 >= 0) 
		maxa1 = n - maxa2;

	cout<<mina<<" "<<maxa1<<"\n";
	return 0;
}