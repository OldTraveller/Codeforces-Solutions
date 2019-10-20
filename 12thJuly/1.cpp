#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n;
	
	int mod = (n % 4); 
	int a = 0; 
	char cat = '?'; 
	if (mod == 1) {
		a = 0; 
		cat = 'A'; 
	} else if (mod == 3) {
		a = 2; 
		cat = 'A'; 
	} else if (mod == 2) {
		a = 1;  
		cat = 'B'; 
	} else if (mod == 0) {
		a = 1; 
		cat = 'A'; 
	}
	cout << a << " " << cat << endl;  
}
