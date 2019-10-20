#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n; 
    for (int i = 0; i < n; i++) {
        string first, second;
        cin >> first >> second; 
        vector<pair<char, int>> seq1; 
        vector<pair<char, int>> seq2; 
        seq1.push_back({first[0], 1}); 
        seq2.push_back({second[0], 1}); 
        for (int i = 1; i < first.length(); i++) {
            if (first[i] == seq1.back().first) seq1.back().second++; 
            else seq1.push_back({first[i], 1});
        }
        for (int i = 1; i < second.length(); i++) {
            if (second[i] == seq2.back().first) seq2.back().second++; 
            else seq2.push_back({second[i], 1}); 
        }

        if (seq1.size() != seq2.size()) cout << "NO" << endl; 
        else {
            bool possible = true; 
            for (int i = 0; i < seq1.size(); i++) {
                if (seq1[i].first != seq2[i].first or 
                    seq1[i].second > seq2[i].second) {
                        possible = false;
                        break;
                    }
            }
            if (possible) cout << "YES" << endl; 
            else cout << "NO" << endl; 
        }
    }
}