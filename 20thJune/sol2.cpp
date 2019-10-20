#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n; 
    vector<int> pos; 
    vector<int> neg; 
    for (int i = 0; i < n; i++) {
        int ele; cin >> ele;
        if (ele >= 0) pos.push_back(ele); 
        else neg.push_back(ele); 
    }
    sort(pos.begin(), pos.end()); 
    for (int i = pos.size() - 1; i >= 0 and i - 1 >= 0; i -= 2) {
        pos[i] = -(pos[i] + 1); 
        pos[i - 1] = -(pos[i - 1] + 1); 
    }
    if (neg.size() == 1) {
        neg[0] = -(neg[0] + 1); 
    }
    for (int a : neg) cout << a << " "; 
    for (int a : pos) cout << a << " "; 
}