#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n; 
	string str;
	cin >> str; 
	bool possible = false;
	for (int i = 1; i < n; i++) {
		if (str[i] < str[i - 1]) {
			possible = 1; 
		}
	}
	if (!possible) {
		cout << "NO" << endl;
	} else {
		int which = 0; 
		cout << "YES" << endl; 
		for (int i = 1; i < n; i++) {
			if (str[i] < str[i - 1]) {
				which = i + 1;
				break; 
			}
		}
		cout << which - 1 << " " << which << endl; 
	}
}
