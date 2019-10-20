#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool proper(string str) {
        for (int i = 1; i < (int)str.size(); i++) {
                if (str[i] > 92) {
                        return 1; 
                }
        }
        return 0; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string str;
        cin >> str;
        if (!proper(str)) {
                for (int i = 0; i < str.size(); i++) {
                        if (str[i] > 92) {
                                str[i] -= 32; 
                        } else {
                                str[i] += 32; 
                        }
                }
        }
        cout << str << endl; 
}