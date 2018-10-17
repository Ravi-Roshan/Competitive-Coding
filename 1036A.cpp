#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int n, k;
	cin>>n>>k;
	if(((long double)k / n) == (long long int)(k / n))
		cout<<k / n<<"\n";
	else
		cout<<(long long int)(k / n) + 1<<"\n";
	return 0;
}


/* ALTERNATIVE SOLUTION */

/*#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int n, k;
	cin>>n>>k;
	long long int i = 1;
	n = 2 * n + 1;
	// while(1 == 1) {
	// 	if((((n - 1) / 2) * i) >= k) {
	if((2.0 * k) / (n - 1) == (long long int)((2 * k) / (n - 1)))
		cout<<(2 * k) / (n - 1)<<"\n";
	else
		cout<<(long long int)((2 * k) / (n - 1)) + 1<<"\n";
	// 		break;
	// 	}
	// 	i++;
	// }


	return 0;
}

*/