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
        stack<char> stck; 
        stck.push(str[0]); 
        for (int i = 1; i < (int)str.size(); i++) {
                if (stck.empty()) stck.push(str[i]); 
                else {
                        if (stck.top() == str[i]) stck.push(str[i]); 
                        else {
                                stck.pop(); 
                        }
                }
        }
        cout << (int)stck.size() << endl; 
}