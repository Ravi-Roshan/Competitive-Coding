#include<iostream>
#include<stack>
#include <algorithm>

#define endl "\n"
typedef long long int lli;

using namespace std;

int main() {
	lli t;
	cin>>t;

	while(t > 0) {
		lli n;
		cin>>n;

		lli a[n], i;
		for(i = 0; i < n; i++) {
			cin>>a[i];
		}

		lli flag = 0;
		lli pos = n - 1;
		for(i = n - 2; i >= 0; i--) {
			if(a[i] < a[i + 1]) {
				flag = 1;
				pos = i;
				break;
			}
		}
		if(flag == 0) {
			cout<<-1<<endl;
			t--;
			continue;
		}

		// cout<<a[pos]<<endl;
		lli min_d = 99999999999, pos_d = n - 1;
		for(i = pos + 1; i <= n - 1; i++) {
			if(a[pos] < a[i] && min_d > a[i]) {
				min_d = a[i];
				pos_d = i;
			}
		}

		lli temp = a[pos];
		a[pos] = a[pos_d];
		a[pos_d] = temp;

		sort(a + pos + 1, a + n);

		for(i = 0; i < n; i++) {
			cout<<a[i];
		}
		cout<<endl;

		t--;
	}

	return 0;
}