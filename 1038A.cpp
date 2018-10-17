#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int n, k, i, min = 0;
	cin>>n>>k;

	int a[k] = {0};

	string str;
	cin>>str;

	for(i = 0; i < str.length(); i++) {
		a[str[i] - 65]++;
	}

	min = a[0];

	for(i = 1; i < k; i++) {
		if(a[i] < min) {
			min = a[i];
		}
	}

	cout<<k * min<<"\n";
	return 0;
}