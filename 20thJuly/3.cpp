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
        map<int, int> counts;
        for (int i = 0; i < n; i++) {
                int coin;
                cin >> coin; 
                counts[coin]++; 
        }
        int mini = INT_MIN; 
        for (auto i : counts) mini = max(mini, i.second); 
        cout << mini << endl; 
}