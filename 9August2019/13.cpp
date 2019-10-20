#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;
        cin >> n; 
        priority_queue<int, vector<int>, greater<int>> pq; 
        for (int i = 0; i < n; i++) {
                int e;
                cin >> e;
                pq.push(e); 
        }
        int ans = 0; 
        for (int i = 1; !pq.empty(); i++) {
                if (pq.top() >= i) {
                        ans++; 
                        pq.pop(); 
                } else {
                        while (pq.top() < i and !pq.empty()) {
                                pq.pop(); 
                        }
                        if (!pq.empty() and pq.top() >= i) {
                                ans++; 
                                pq.pop(); 
                        }
                }
        }
        cout << ans << endl; 
}