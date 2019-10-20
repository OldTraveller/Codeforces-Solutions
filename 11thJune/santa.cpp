#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 1007; 
int dp[MAX_SIZE]; 
int prefix[MAX_SIZE]; 

void precal() {
	iota(dp, dp + MAX_SIZE, 1); 
	prefix[0] = dp[0]; 
	for (int i = 1; i < MAX_SIZE; i++) {
		prefix[i] = prefix[i - 1] + (i + 1); 
	}
}

int main() {
	precal();
	int n; 
	cin >> n; 	
	vector<int> vals = {1}; 
	int sum = 1; 
	int i = 1; 
	while (sum + dp[i] <= n) {
		sum += dp[i]; 
		vals.push_back(dp[i]); 
		i++;
	}	
	if (sum < n) vals.back() += (n - sum); 
	cout << vals.size() << endl;
	for (int a : vals) cout << a << " ";
}
