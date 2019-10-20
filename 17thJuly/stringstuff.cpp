#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t; 
	cin >> s >> t; 
	int counts = 0; 
	for (int i = s.size() - 1, j = t.size() - 1; i >= 0 and j >= 0; i--, j--) {
		if (s[i] == t[j]) {
			counts++; 
		} else {
			break;
		}
	}
	cout << s.size() - counts + t.size() - counts << endl; 	
}
