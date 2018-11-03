#include<bits/stdc++.h>

#define endl "\n"
typedef long long int lli;

using namespace std;

int main() {
	lli n, v, i;
	cin>>n>>v;

	lli h[n];

	for(i = 0; i < n; i++) {
		cin>>h[i];
	}

	sort(h, h + n);

	

	lli min = h[0];

	for(i = 1; i < n; i++) {
		h[i] -= min;
	}

	i = 1;
	lli store_v = v, curr_h = 0, counter = 0;
	while(i < n) {
		if(h[i] == curr_h) {
			i++;
			continue;
		}

		curr_h++;
		v -= (n - i);

		if(h[i] == curr_h) {
			i++;
		}

		if(v < n - i) {
			v = store_v;
			counter++;
		}
	}

	if(v != store_v) {
		counter++;
	}

	cout<<counter<<endl;

	return 0;
}