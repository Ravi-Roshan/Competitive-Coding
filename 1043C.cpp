#include<bits/stdc++.h>

#define endl "\n"
typedef long long int lli;

using namespace std;

string str;

void rev(int i) {
	int j = 0;

	while(j <= i) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
		j++;
	}
}

int main() {
	cin>>str;

	int i, l = str.length(), len = str.length(), n = 0;

	char ch = str[0];

	for(i = l - 1; i >= 0; i--) {
		if(str[i] != 'b')
			break;
	}

	l = i + 1;

	// cout<<l<<endl;

	for(i = 0; i < l - 1; i++) {
		if(str[i] != str[i + 1]) {
			rev(i);
			cout<<"1 ";
			n++;
		}
		else {
			cout<<"0 ";
			n++;
		}
	}

	if(str[l-1] == 'a') {
		rev(l-1);
		cout<<"1 ";
		n++;
	}
	else {
		cout<<"0 ";
		n++;
	}

	// cout<<n<<endl;

	while(n < len) {
		cout<<"0 ";
		n++;
	}

	cout<<endl;

	return 0;
}