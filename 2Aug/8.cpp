#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool isVowel(char ch) {
        return (ch == 'A') or (ch == 'E') or (ch == 'I') or 
               (ch == 'O') or (ch == 'U') or (ch == 'Y'); 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string paper;
        cin >> paper;
        int n = (int)paper.size(); 
        vector<int> pos; 
        for (int i = 0; i < n; i++) {
                if (isVowel(paper[i])) {
                        pos.push_back(i); 
                }
        }
        if (pos.empty()) {
                cout << n + 1 << endl; 
        } else {
                int jump = pos[0] + 1;
                for (int i = 0; i < pos.size(); i++) {
                        if (i == pos.size() - 1) {
                                jump = max(jump, n - pos[i]); 
                        } else {
                                jump = max(jump, pos[i + 1] - pos[i]); 
                        }
                }
                cout << jump << endl; 
        }
}