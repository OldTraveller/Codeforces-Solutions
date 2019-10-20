#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string str;
        cin >> str;
        int k;
        cin >> k; 
        int val[26]; 
        for (int i = 0; i < 26; i++) {
                cin >> val[i]; 
        }
        int max_value = *max_element(val, val + 26); 
        int total = 0; 
        for (int i = 0; i < (int)str.size(); i++) {
                total += val[str[i] - 'a'] * (i + 1); 
        }
        int size = (int)str.size(); 
        for (int i = size; i < size + k; i++) {
                total += (i + 1) * max_value; 
        }
        cout << total << endl; 
}