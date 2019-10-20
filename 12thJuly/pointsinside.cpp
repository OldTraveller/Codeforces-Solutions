#include <bits/stdc++.h>
using namespace std;
using LL = long long int;

int main() {
	int n; 
	cin >> n; 
	LL coorSum = LLONG_MIN; 
	for (int i = 0; i < n; i++) {
		LL xi, yi; 
		cin >> xi >> yi; 
		coorSum = max(coorSum, xi + yi); 
	}
	cout << coorSum << "\n";
}
