#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int t, s, a, b, c, num = 0, temp;
	cin>>t;

	for (int i = 0; i < t; ++i) {
		cin>>s>>a>>b>>c;
		num = s/c;
		temp = num/a;
		num += temp*b;
		cout<<num<<"\n";
	}
	return 0;
}