#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m; 
    priority_queue<int, vector<int>, greater<int>> pq; 
    for (int i = 0; i < n; i++) {
        int e; cin >> e;
        pq.push(e); 
    }
    int sum = 0; 
    while (!pq.empty() and pq.top() < 0 and m--) {
        sum -= pq.top(); 
        pq.pop();
    }
    cout << sum << endl;
}