#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n; 
    vector<pair<int, int>> pos;  
    vector<pair<int, int>> neg;  
    for (int i = 0; i < n; i++) {
        int ele; cin >> ele;
        if (ele >= 0) pos.push_back({ele, i}); 
        else neg.push_back({ele, i}); 
    }
    int posSize = pos.size(); 
    int negSize = neg.size(); 
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end()); 
    if (posSize % 2 == 0 and negSize % 2 == 0) {
        for (int i = 0; i < pos.size(); i++) pos[i].first = -(pos[i].first + 1); 
    } else if (posSize % 2 == 0 and negSize % 2 == 1) {
        neg[0].first = -(neg[0].first + 1); 
        for (int i = 0; i < pos.size(); i++) {
            pos[i].first = -(pos[i].first + 1); 
        }
    } else if (posSize % 2 == 1 and negSize % 2 == 0) {
        for (int i = posSize - 1; i >= 0 and i - 1 >= 0; i -= 2) {
            pos[i].first = -(pos[i].first + 1); 
        }
    } else if (posSize % 2 == 1 and negSize % 2 == 1) {
        for (int i = 0; i < pos.size(); i++) {
            pos[i].first = -(pos[i].first + 1); 
        }
    }
    vector<pair<int, int>> combine(pos); 
    combine.insert(combine.end(), neg.begin(), neg.end()); 
    sort(combine.begin(), combine.end(), [&](pair<int, int> &p1, pair<int, int> &p2) {
        return p1.second < p2.second; 
    });     
    for (pair<int, int> &a : combine) cout << a.first << " "; 
}