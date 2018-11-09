#include<iostream>
#include<stack>
#include <algorithm>

#define endl "\n"
typedef long long int lli;

using namespace std;

int main() {
	lli t;
	cin>>t;

	while(t > 0) {
		string s;
		cin>>s;

		lli l = s.length();

		lli c = 0, i, res = 0, max = 0;
		for(i = 0; i < l; i++) {
			if(s[i] == '<') {
				c++;
			}
			else {
				if(c > 0) {
					c--;
					res += 2;
				}
				else {
					if(res >= max) {
						max = res;
						res = 0;
					}
					else {
						res = 0;
					}
				}
			}
		}
		if(res >= max) {
			max = res;
		}
		cout<<max<<endl;

		t--;
	}

	return 0;
}