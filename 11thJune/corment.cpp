#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k; 
	int arr[n]; 
	for (int i = 0; i < n; i++) cin >> arr[i]; 
	int add = 0; 
	for (int i = 1; i < n; i++) {
		int more = max(0, k - arr[i] - arr[i - 1]); 
		add += more; 
		arr[i] += more; 
	}	
	cout << add << '\n'; 
	for (int i = 0; i < n; i++) cout << arr[i] << " "; 
	cout << '\n'; 
}
