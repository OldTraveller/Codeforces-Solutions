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
        deque<pair<int, int>> child;
        for (int i = 1; i <= n; i++) {
                pair<int, int> c; 
                c.first = i; 
                cin >> c.second;
                child.push_back(c); 
        }
        while (child.size() != 1) {
                child.front().second -= m; 
                if (child.front().second <= 0) {
                        child.pop_front(); 
                } else {
                        pair<int, int> c = child.front(); 
                        child.pop_front(); 
                        child.push_back(c); 
                }
        }
        cout << child[0].first << endl; 
}