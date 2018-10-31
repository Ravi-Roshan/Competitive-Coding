#include<bits/stdc++.h>

#define endl "\n"

using namespace std;

int main() {
	long long int x;
	cin>>x;

	long long int n = 2, count = 1;
	while(n <= x) {
		n *= 2;
		count++;
	}

	cout<<count<<endl;

	return 0;
}