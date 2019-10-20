#include <bits/stdc++.h>
using namespace std;
using LL = int64_t;

LL min_peri(int n) {
	LL l = sqrt(n); 
	if (l * l == n) {
		return 4 * l; 
	} else {
		LL rows = n / l; 
		LL perimeter = 2 * (rows + l); 
		if (n % l != 0) {
			perimeter += 2;
		}
		return perimeter;
	}
}

int main() {
	int n; 
	cin >> n;
	cout << min_peri(n) << endl;
}
