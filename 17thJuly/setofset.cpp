#include <bits/stdc++.h>
using namespace std;

int main() {
	set<set<char>> setofset; 
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		set<char> setchar; 
		for (char a : str) {
			setchar.insert(a); 
		}
		setofset.insert(setchar); 
	}
	cout << setofset.size() << endl;
}
