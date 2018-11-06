#include<iostream>
#include<algorithm>

#define endl "\n"
typedef long long int lli;

using namespace std;

int main() {
	lli n, d, i, c = 0;
	cin>>n>>d;

	lli a[n];

	for(i = 0; i < n; i++) {
		cin>>a[i];
	}

	sort(a, a + n);

	i = 0;
	while(i < n - 1) {
		if(a[i + 1] - a[i] <= d) {
			c++;
			i++;
		}
		i++;
	}

	cout<<c<<endl;

	return 0;
}