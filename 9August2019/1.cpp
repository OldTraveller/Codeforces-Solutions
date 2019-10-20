#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string one, two; 
        cin >> one >> two; 
        int same = 0;   
        int minSize = (int)min(one.size(), two.size()); 
        for (int i = 0; i < minSize; i++) {
                if (one[one.size() - i - 1] == two[two.size() - i - 1]) {
                        same++; 
                } else {
                        break; 
                }
        }
        int ans = one.size() + two.size() - 2 * same;
        cout << ans << endl;
}