#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const double PI = 3.141592654 ;
const int N = 5*1e5 + 77; 
int total[N], parent[N]; 

int getParent(int x) {
    if (x == parent[x]) {
        return x; 
    } else {
        return parent[x] = getParent(parent[x]); 
    }
}

void connect(int p1, int p2) {
    p1 = getParent(p1); 
    p2 = getParent(p2); 
    if (p1 == p2) return; 
    if (total[p1] < total[p2]) swap(p1, p2); 
    parent[p2] = p1;
    total[p1] += total[p2]; 
}

int main() {
    ios :: sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    cout.tie(nullptr) ;
    
    int n, m; cin >> n >> m; 
    for (int i = 1; i < n + 1; i++) {
        parent[i] = i; total[i] = 1; 
    }
    for (int i = 0; i < m; i++) {
        int ki; cin >> ki; 
        int last = -1; 
        for (int j = 0; j < ki; j++) {
            int per; cin >> per; 
            if (last != -1) connect(per, last); 
            last = per; 
        }
    }
    for (int i = 1; i < n + 1; i++) {
        cout << total[getParent(i)] << " "; 
    }
}