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
        unordered_map<int, int> mp; 
        for (int i = 0; i < n; i++) {
                int e; 
                cin >> e;
                mp[e]++; 
        }
        if (mp.size() != 2) {
                cout << "NO" << endl; 
        } else {
                int num1, count1, num2, count2; 
                auto i = mp.begin(); 
                num1 = i -> first; 
                count1 = i -> second; 
                i++;
                num2 = i -> first; 
                count2 = i -> second; 
                if (count1 == count2) {
                        cout << "YES" << endl; 
                        cout << num1 << " " << num2 << endl; 
                } else {
                        cout << "NO" << endl; 
                }
        }
}