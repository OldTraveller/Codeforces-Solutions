#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int na, nb; 
        cin >> na >> nb; 
        int k, m; 
        cin >> k >> m; 
        vector<LL> arr1(na); 
        vector<LL> arr2(nb); 
        for (LL &a : arr1) cin >> a;
        for (LL &b : arr2) cin >> b; 
        if (arr1[k - 1] < arr2[nb - m]) cout << "YES" << endl; 
        else cout << "NO" << endl; 
}