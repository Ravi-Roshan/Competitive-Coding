// #include<bits/stdc++.h>

// using namespace std;

// int main() {
// 	long long int n, L, a, i;
// 	cin>>n>>L>>a;

// 	long long int t[n] = {L+1}, l[n];

// 	for(i = 0; i < n; i++) {
// 		cin>>t[i]>>l[i];
// 	}

// 	i = 0;

// 	long long int temp = 0, num = 0;
// 	while(temp < L) {
// 		// if(temp + a <= t[i] || (temp + a <= L && temp + a > t[n-1] + l[n-1] && i == n - 1)) {
// 		// 	temp += a;
// 		// 	num++;
// 		// }
// 		// else if (i < n - 1) {
// 		// 	temp = t[i] + l[i];
// 		// 	i++;
// 		// }
// 		// else {
// 		// 	break;
// 		// }
// 	}

// 	cout<<num<<"\n";

// 	return 0;
// }

#include<iostream>

using namespace std;

int main() {
	long long int n, L, a, i;
	long long int temp = 0, num = 0;
	cin>>n>>L>>a;

	long long int t[1000000] = {-1}, l[n], u = 0;

	for(i = 0; i < n; i++) {
		cin>>t[i]>>l[i];
		if((t[i] - u) >= a) {
			num += (t[i] - u) / a;
		}
		u = t[i] + l[i];
	}
//cout<<u<<" "<<a<<" "<<L<<endl;
	while((u + a) <= L) {//cout<<"ahaey\n";
		num++;
		u += a;//cout<<u<<" "<<a<<endl;
		//cout<<u+a<<endl;
		//cout<<L<<endl;
	}

	// i = 0;
	// while(temp < L) {
	// 	if(temp + a <= t[i]) {
	// 		temp += a;
	// 		num++;
	// 	}
	// 	else if(i < n - 1) {
	// 		temp = t[i] + l[i];
	// 		i++;
	// 	}
	// 	else {
	// 		if(n > 0)
	// 			temp = t[n-1] + l[n-1];
	// 		break;
	// 	}
	// }

	// while(temp + a <= L) {
	// 	temp += a;
	// 	num++;
	// }

	cout<<num<<"\n";

	return 0;
}