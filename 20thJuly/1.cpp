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
        vector<pair<char, int>> counts; 
        counts.push_back({str[0], 1}); 
        for (int i = 1; i < str.size(); i++) {
                if (str[i] == counts.back().first) {
                        counts.back().second++; 
                } else {
                        counts.push_back({str[i], 1}); 
                }
        }
        int tot = 0; 
        for (auto i : counts) {
                if (i.first == 'B') tot++; 
        }
        cout << tot << endl;
        for (auto i : counts) {
                if (i.first == 'B') cout << i.second << " ";
        }
}