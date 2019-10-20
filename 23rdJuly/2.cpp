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
        set<char> st; 
        for (char c : str) st.insert(c); 
        cout << ((st.size() & 1) ? "IGNORE HIM!" : "CHAT WITH HER!") << endl; 
}