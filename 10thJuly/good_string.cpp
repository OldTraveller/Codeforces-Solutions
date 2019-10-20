#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string str;
        cin >> str;
        unordered_map<char, int> counts;
        for (int i = 0; i < str.size(); i++) {
            counts[str[i]] = i; 
        }
        if (counts.size() == 1) {
            cout << -1 << endl;
        } else {
            auto it = counts.begin(); 
            int pos1 = it -> second; 
            it++; 
            int pos2 = it -> second;
            swap(str[0], str[pos1]); 
            swap(str[str.size() - 1], str[pos2]); 
            cout << str << endl;
        }
    }
}