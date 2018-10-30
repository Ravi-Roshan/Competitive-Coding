#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int n, i, j;
	cin>>n;

	// for(i = 1; i <= n && i % 3 != 0; i++) {
	// 	for(j = i; j <= n; j += 3) {
	// 		if((n - (i + j)) % 3 != 0) {
	// 			cout<<i<<" "<<j<<" "<<n - (i + j)<<"\n";
	// 			return 0;	
	// 		}
	// 	}
	// }

	// if((n / 3) % 3 == 0)
	// 	cout<<n/3 + 1<<" "<<n/3 + 2<<" "<<n/3 - 2<<endl;
	// else {
	// 	cout<<n/3<<" ";
	// 	if((n/3 + 1) % 3 == 0) {
	// 		cout<<
	// 	}
	// }
	if(n == 3)
		cout<<"1 1 1\n";
	else if(n % 3 == 0 && (n / 3 - 1) % 3 != 0) 
		cout<<n/3 - 1<<" "<<n/3 - 1<<" "<<n/3 + 2<<endl;
	else if(n % 3 == 0 && (n / 3 - 1) % 3 == 0)
		cout<<((n/3) - 2)<<" "<<(n/3) - 2<<" "<<((n/3) + 4)<<endl;
	else if(n % 3 != 0 && (n / 3) % 3 != 0) {
		if((n/3 - 1) % 3 == 0)
			cout<<n/3<<" "<<n/3 + 1<<" "<<(n - n/3 - 1 - n/3)<<endl;
		else
			cout<<n/3 - 1<<" "<<n/3<<" "<<n - n/3 + 1 - n/3<<endl;
	}
	else if(n % 3 != 0)
		cout<<(n/3)-1<<" "<<(n/3)+1<<" "<<n - n/3 + 1 - n/3 - 1<<endl;
	return 0;
}