#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int b, k; 
        cin >> b >> k; 
        if (b & 1) {
                int total = 0;
                for (int i = 0; i < k; i++) {
                        int e;
                        cin >> e;
                        total += e; 
                }
                if (total & 1) {
                        cout << "ODD" << endl; 
                } else {
                        cout << "EVEN" << endl; 
                }
        } else {
                int last = -1; 
                for (int i = 0; i < k; i++) {
                        int e;
                        cin >> e; 
                        if (i == k - 1) {
                                last = e; 
                        }
                }
                if (last & 1) {
                        cout << "ODD" << endl;
                } else {
                        cout << "EVEN" << endl; 
                }
        }
}