#include <bits/stdc++.h>
using namespace std;
using LL = long long; 

int main() {
	int n; 
	cin >> n; 
	vector<LL> ele; 
	for (int i = 0; i < n; i++) {
		LL e; cin >> e; 
		ele.push_back(e); 
	}
	sort(ele.begin(), ele.end()); 
	bool notposi = (ele[n - 1] >= ele[n - 2] + ele[n - 3]);  
	if (notposi) cout << "NO" << endl; 
	else {
		cout << "YES" << endl; 
		cout << ele[n - 3] << " " << ele[n - 1] << " " << ele[n - 2] << " "; 
		for (int i = n - 4; i >= 0; i--) {
			cout << ele[i] << " "; 
		}
	}
}
