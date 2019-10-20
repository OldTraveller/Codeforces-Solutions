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
        bool goodCars[n + 1]; 
        memset(goodCars, 1, sizeof goodCars); 
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                        int e; 
                        cin >> e;
                        if (e == 3) {
                                goodCars[i] = 0; 
                                goodCars[j] = 0; 
                        } else if (e == 1) {
                                goodCars[i] = 0; 
                        } else if (e == 2) {
                                goodCars[j] = 0; 
                        }
                }
        }
        vector<int> good; 
        for (int i = 1; i <= n; i++) {
                if (goodCars[i]) {
                        good.push_back(i); 
                }
        }
        cout << (int)good.size() << endl;
        for (int a : good) cout << a << " "; 
        cout << endl;  
}