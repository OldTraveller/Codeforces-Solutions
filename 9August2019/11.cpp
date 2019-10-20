#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string cd;
        cin >> cd;
        int row = int(cd[0] - 'a');  
        int col = int(cd[1] - '0') - 1; 
        int ans = 8; 
        bool R = (row - 1 < 0) or (row + 1 > 7); 
        bool C = (col - 1 < 0) or (col + 1 > 7); 
        if (R) ans -= 3; 
        if (C) ans -= 3;
        if (R and C) ans++; 
        cout << ans << endl; 
}