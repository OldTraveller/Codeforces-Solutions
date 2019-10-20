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
        if (second.length() < first.length()) {
            cout << "NO" << endl;
        } else {
            vector<char> seq1; 
            vector<char> seq2;
            seq1.push_back(first[0]);
            seq2.push_back(second[0]); 
            for (int i = 1; i < first.length(); i++) {
                if (first[i] == seq1.back()) continue;
                else seq1.push_back(first[i]); 
            }
            for (int i = 1; i < second.length(); i++) {
                if (second[i] == seq2.back()) continue;
                else seq2.push_back(second[i]); 
            }
            if (seq1 == seq2) cout << "YES" << endl; 
            else cout << "NO" << endl;
        }
    }
}