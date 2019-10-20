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
    unordered_map<int, int> ele;
    for (int i = 0; i < n; i++) {
        int e; 
        cin >> e;
        if (e) ele[e]++; 
    }
    cout << ele.size() << endl;
}