#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const double PI = 3.141592654 ;

bool solve(int x, vector<pair<int, int>> &pairs) {
    vector<int> others; 
    for (int i = 1; i < pairs.size(); i++) {
        if (pairs[i].first != x and pairs[i].second != x) others.push_back(i); 
    }   
    int total = pairs.size() - others.size(); 
    if (!others.empty()) {
        int first = pairs[others[0]].first; 
        int counts = 0; 
        for (int i = 0; i < others.size(); i++) {
            if (pairs[others[i]].first == first or pairs[others[i]].second == first) {
                counts++; 
            }
        }
        if (counts == pairs.size() - total) return true; 
        first = pairs[others[0]].second; 
        counts = 0; 
        for (int i = 0; i < others.size(); i++) {
            if (pairs[others[i]].first == first or pairs[others[i]].second == first) {
                counts++; 
            }
        }
        if (counts == pairs.size() - total) return true; 
        return false; 
    }
    return true; 
}

int main() {
    ios :: sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    cout.tie(nullptr) ;
    
    int n, m; cin >> n >> m; 
    vector<pair<int, int>> pairs(m); 
    for (int i = 0; i < m; i++) {
        cin >> pairs[i].first >> pairs[i].second; 
    }
    cout << (solve(pairs[0].first, pairs) or solve(pairs[0].second, pairs) ? "YES" : "NO") << endl; 
}