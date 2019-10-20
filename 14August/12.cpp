#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        vector<LL> sheldon = {1}; 
        LL k = 5L; 
        for (int i = 1; (sheldon.back() < (LL)1e9 + (LL)1e3); i++) {
                sheldon.push_back(sheldon.back() + k);
                k <<= 1L;  
        }
        cout << endl; 
        LL n; 
        cin >> n; 
        auto gap = (lower_bound(sheldon.begin(), sheldon.end(), n) - sheldon.begin()); 
        LL powerGap = (1L << gap);
        LL upper = gap + 1; 
        if (!binary_search(sheldon.begin(), sheldon.end(), n)) {
                upper--; 
                gap--; 
        }
        LL elemBetween = sheldon[upper] - sheldon[gap]; 
        LL equalGaps = elemBetween / 5; 
        n -= sheldon[gap]; 
        LL verdict = n / equalGaps; 
        switch (verdict) {
                case 0: cout << "Sheldon" << endl;
                        break; 
                case 1: cout << "Leonard" << endl; 
                        break; 
                case 2: cout << "Penny" << endl; 
                        break; 
                case 3: cout << "Rajesh" << endl; 
                        break; 
                case 4: cout << "Howard" << endl; 
                        break;
                default: cout << verdict << endl; 
        }
        return EXIT_SUCCESS; 
}