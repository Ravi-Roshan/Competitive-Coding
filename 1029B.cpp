#include<bits/stdc++.h>

#define endl "\n"

using namespace std;

int main() {
	long long int n, i;
	cin>>n;

	long long int a[n];
	for(i = 0; i < n; i++) {
		cin>>a[i];
	}

	i = 1;
	long long int num = 1, min = 1;
	while(i < n) {
		if(a[i] <= 2 * a[i-1]) {
			num++;
		}
		else {
			if(num > min) {
				min = num;
			}
			num = 1;
		}
		i++;
	}
	if(num > min) {
		min = num;
	}
	cout<<min<<endl;
	return 0;
} 	 	