#include <bits/stdc++.h>
using namespace std;
using LL = long long; 

int main() {
	int n; 
	LL m; 
	cin >> n >> m; 
	LL ptr = 0; 
	for (int i = 0; i < n; i++) {
		LL totNames; 
		cin >> totNames; 
		ptr += totNames; 
		cout << ptr/m << " "; 
		ptr %= m; 
	}
	puts("\n");
}
