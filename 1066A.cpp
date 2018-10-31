#include<bits/stdc++.h>

#define endl "\n"

using namespace std;

int main() {
	long long int t, L, v, l, r, num = 0;
	cin>>t;

	while(t > 0) {
		cin>>L>>v>>l>>r;
		// for(int i = v; i <= L; i += v) {
		// 	if(i >= l && i <= r) {

		// 	}
		// 	else {
		// 		num++;
		// 	}
		// }
		long long int temp;
		if(l % v != 0) {
			temp = l / v + 1;
		}
		else {
			temp = l / v;
		}
		num = L / v - (r / v - temp + 1);
		cout<<num<<endl;
		t--;
	}
	return 0;
} 	 	