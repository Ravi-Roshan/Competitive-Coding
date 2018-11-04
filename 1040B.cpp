#include<bits/stdc++.h>

#define endl "\n"
typedef long long int lli;

using namespace std;

int main() {
	int n, k;
	cin>>n>>k;

	int i = 0, a[10000] = {-100000000}, val = 0, last_val = -1000000000;
	while(val + k + 1<= n) {
		val += k  + 1;
		a[i++] = val;
		last_val = val;
		val += k;
	}

	// for(int k = 0; k < i; k++) {
	// 	cout<<a[k]<<" ";
	// }

	if(last_val + k < n) {
		int temp = a[i-1] + 2*k + 1 - n;
		for(int j = 0; j < i; j++) {
			a[j] -= temp;
		}
		a[i++] = n;
	}

	cout<<i<<endl;
	for(int k = 0; k < i; k++) {
		cout<<a[k]<<" ";
	}	

	cout<<endl;

	return 0;
}