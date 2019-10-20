#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n; 
	vector<int> skills(n); 
	for (int i = 0; i < skills.size(); i++) {
		cin >> skills[i]; 
	}
	sort(skills.begin(), skills.end()); 
	int ans = 0; 
	for (int i = 1; i < n; i += 2) {
		ans += (skills[i] - skills[i - 1]); 
	}
	cout << ans << endl;
}
