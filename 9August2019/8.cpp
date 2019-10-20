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

        for (int i = 0; i < n - 1; i++) {
                if (str[i] != str[i + 1]) {
                        cout << "YES" << endl; 
                        cout << str[i] << str[i + 1] << endl;
                        return 0; 
                }
        }
        cout << "NO" << endl;
        return 0; 
}