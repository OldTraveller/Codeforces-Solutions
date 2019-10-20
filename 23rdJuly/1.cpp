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
        char recent = str[0]; 
        int counts = 0; 
        for (int i = 1; i < str.size(); i++) {
                if (str[i] == recent) counts++; 
                else {
                        recent = str[i]; 
                }
        }
        cout << counts << endl; 
}