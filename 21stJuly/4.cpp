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
        vector<int> lP; 
        for (int i = 0; i < n; i++) {
                int f, l;
                cin >> f >> l; 
                lP.push_back(l); 
        }
        int marked; 
        cin >> marked; 
        int counts = 0; 
        for (int i = 0; i < lP.size(); i++) {
                if (lP[i] < marked) counts++; 
        }
        cout << n - counts << endl; 
}