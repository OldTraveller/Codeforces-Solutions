#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int arr[26];
	fill(arr, arr + 26, 0); 
	for (int i = 0; i < str.size(); i++) {
		arr[str[i] - 'a']++; 
	}	
	char disp = '?';
	int counts = 0;  	
	for (int i = 25; i >= 0; i--) {
		if (arr[i]) {
			disp = char(i + 'a'); 
			counts = arr[i]; 
			break;
		}
	}
	for (int i = 0; i < counts; i++) cout << disp; 
	cout << endl; 
}
