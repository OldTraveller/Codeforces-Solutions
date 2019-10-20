#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, v;
        cin >> n >> v;
        vector<int> seller; 
        for (int i = 1; i <= n; i++) {
                int items; 
                cin >> items; 
                bool elig = 0; 
                for (int i = 0; i < items; i++) {
                        int item_price;
                        cin >> item_price; 
                        if (item_price < v) {
                                elig = 1; 
                        }
                }
                if (elig) seller.push_back(i); 
        }
        cout << (int)seller.size() << endl;
        for (int a : seller) {
                cout << a << " "; 
        }
}