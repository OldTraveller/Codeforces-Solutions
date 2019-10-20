#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n; 
    vector<set<int>> tree(n + 1);  
    set<int> parents; 
    for (int i = 1; i < n; i++) {
        int parent; cin >> parent; 
        tree[parent].insert(i + 1); 
        parents.insert(parent); 
    }
    for (int i = 1; i <= n; i++) {
        for (int a : parents) {
            if (tree[i].find(a) != tree[i].end()) {
                tree[i].erase(a); 
            }
        }
    }
    bool possible = true; 
    for (int a : parents) {
        if (tree[a].size() < 3) {
            possible = false;
            break; 
        }
    }
    if (!possible) cout << "No" << endl; 
    else cout << "Yes" << endl; 
}