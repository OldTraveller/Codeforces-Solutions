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
        string str;
        cin >> str;
        vector<int> counts; 
        bool shuru = false; 
        for (char ch : str) {
                if (ch == 'B' and shuru) {
                        counts.back()++; 
                } else if (ch == 'B') {
                        shuru = 1; 
                        counts.push_back(1); 
                } else {
                        shuru = 0; 
                }
        }
        cout << counts.size() << endl;
        for (int a : counts) cout << a << " ";
}