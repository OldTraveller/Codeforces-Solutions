#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; 
	double minRatio = DBL_MAX; 
	cin >> n >> m; 
	for (int i = 0; i < n; i++) {
		double a, b; 
		cin >> a >> b; 
		double ratio = (a/b); 
		if (ratio < minRatio) minRatio = ratio; 
	}
	cout << fixed << setprecision(8) << minRatio * m << endl; 
}
