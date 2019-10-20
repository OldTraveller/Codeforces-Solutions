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
        vector<LL> odd;         
        vector<LL> even; 
        LL sum = 0L; 
        for (int i = 0; i < n; i++) {
                LL e;
                cin >> e;
                if (e & 1) odd.push_back(e); 
                else even.push_back(e); 
                sum += e; 
        }
        sort(odd.begin(), odd.end()); 
        sort(even.begin(), even.end()); 
        while (odd.size() and even.size()) {
                sum -= odd.back(); 
                sum -= even.back(); 
                odd.pop_back(); 
                even.pop_back(); 
        }
        if (odd.size()) sum -= odd.back(); 
        if (even.size()) sum -= even.back(); 
        cout << sum << endl; 
}