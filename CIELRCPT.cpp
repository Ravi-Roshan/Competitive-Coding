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
		lli p, c = 0;
		cin>>p;

		while(p >= 2048) {
			p -= 2048;
			c++;
		}
		while(p >= 1024) {
			p -= 1024;
			c++;
		}
		while(p >= 512) {
			p -= 512;
			c++;
		}
		while(p >= 256) {
			p -= 256;
			c++;
		}
		while(p >= 128) {
			p -= 128;
			c++;
		}
		while(p >= 64) {
			p -= 64;
			c++;
		}
		while(p >= 32) {
			p -= 32;
			c++;
		}
		while(p >= 16) {
			p -= 16;
			c++;
		}
		while(p >= 8) {
			p -= 8;
			c++;
		}
		while(p >= 4) {
			p -= 4;
			c++;
		}
		while(p >= 2) {
			p -= 2;
			c++;
		}
		while(p == 1) {
			p -= 1;
			c++;
		}
		cout<<c<<endl;

		t--;		
	}

	return 0;
}