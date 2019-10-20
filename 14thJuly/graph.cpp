#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
unordered_set<string> encountered; 
map<string, string> mp; 
int overall = 1; 

string dfs(string str, int count) {
        if (encountered.find(str) != encountered.end()) return str; 
        else {
                if (count > 1) overall++;
                encountered.insert(str); 
                return dfs(mp[str], count + 1);  
        }
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int q;
        cin >> q;
        for (int i = 0; i < q; i++) {
                string oldn, newn; 
                cin >> oldn >> newn; 
                mp[oldn] = newn; 
        }
        for (auto i : mp) {
                cout << i.first << " " << i.second << endl;
        }
}