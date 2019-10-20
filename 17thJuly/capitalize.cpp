#include <bits/stdc++.h>
using namespace std;

int main() {
	string str; 
	cin >> str;
	if (str[0] >= 97 and str[0] <= 122) {
		str[0] -= 32; 
	}
	cout << str << endl;
}
