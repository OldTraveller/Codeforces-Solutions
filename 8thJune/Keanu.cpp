#include <bits/stdc++.h>
using namespace std;
using LL = long long; 

int main() {
	int n; 
	cin >> n; 
	string str;
	cin >> str; 	
	int ones = 0; 
	int twos = 0; 
	for (char ch : str) {
		if (ch == '1') ones++; 
		else twos++; 
	}
	if (ones != twos) cout << "1\n" << str << endl; 
	else {
		cout << 2 << endl; 
		for (int i = 0; i < n - 1; i++) cout << str[i]; 
		cout << " " << str[n - 1] << endl; 
	}
}
