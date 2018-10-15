#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int n, sum = 0, temp, d;
	string s;

	cin>>n;
	cin>>s;

	long long int a[10] = {0};

	for (long long int i = 0; i < s.length(); ++i) {
		// cout<<s[i] - 48<<endl;
		a[s[i] - 48]++;
	}

	temp = n - a[8];

	d = temp / 10;

	// cout<<n<<" "<<d<<" "<<temp<<" "<<a[8]<<endl;

	if(d == a[8]) {
		cout<<a[8]<<"\n";
	}
	else if(d > a[8]) {
		cout<<a[8]<<"\n";
	}
	else {//cout<<"*********************\n";
		temp = temp % 10;
		sum = temp + a[8] - d;
		cout<<(sum)/11 + d<<"\n";
	}
	return 0;
}