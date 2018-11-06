#include<iostream>

#define endl "\n"
typedef long long int lli;

using namespace std;

int main() {
	lli t, n, i;
	cin>>t;

	while(t > 0) {
		cin>>n;
		lli a[n];
		for(i = 0; i < n; i++) {
			cin>>a[i];
		}
		lli arr[n], ind = n - 1;
		while(ind >= 0) {
			if(ind == n - 1) {
				arr[ind] = 1;
			}
			else if(a[ind] * a[ind + 1] < 0) {
				arr[ind] = arr[ind + 1] + 1;
			}
			else {
				arr[ind] = 1;
			}
			ind--;
		}

		for(i = 0; i < n; i++) {
			cout<<arr[i]<<" ";
		}

		cout<<endl;

		t--;
	}

	return 0;
}