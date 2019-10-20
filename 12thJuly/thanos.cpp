#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(0);
	
	int n; 
	cin >> n; 
	int arr[2 * n];
	for (int i = 0; i < 2 * n; i++) {
		cin >> arr[i]; 
	}
	sort(arr, arr + 2 * n); 
	if (arr[0] == arr[2 * n - 1]) {
		cout << "-1" << endl; 
	} else {
		for (int a : arr) {
			cout << a << " "; 
		}
	}
}
