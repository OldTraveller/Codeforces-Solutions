#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(0); 
	
	int n; 
	cin >> n; 
	priority_queue<int, vector<int>, greater<int>> pq; 
	for (int i = 0; i < n; i++) {
		int probs; 
		cin >> probs; 
		pq.push(probs); 
	}
	int total_days = 0;
	for (int i = 1; !pq.empty(); i++) {
		if (pq.top() >= i) {
			total_days++; 
			pq.pop(); 
		}
		while (!pq.empty()) {
			if (pq.top() <= i) pq.pop();
			else break;
		}
	}
	cout << total_days << endl;
}
