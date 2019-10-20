#include <bits/stdc++.h>
using namespace std;
set<int> chunks;

void precal(int n) {
	if (n > 100) return;
	if (chunks.find(n) != chunks.end()) return; 
	else {
		chunks.insert(n); 
		precal(n + 3); 
		precal(n + 7);
	}
}

int main() {
	int n; 
	cin >> n; 
	precal(0); 
	for (int i = 0; i < n; i++) {
		int qty;
		cin >> qty;
		if (chunks.find(qty) != chunks.end()) {
			cout << "YES" << endl; 
		} else {
			cout << "NO" << endl;
		}
	}
}
