#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

double calculateMaxDiff(const vector<double>& bulbs) {
        double maxDiff = -1; 
        for (int i = 1; i < (int)bulbs.size(); i++) {
                maxDiff = max(maxDiff, bulbs[i] - bulbs[i - 1]); 
        }
        return maxDiff; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        vector<double> bulbs; 
        bulbs.push_back(0); 
        LL n, l; 
        cin >> n >> l; 
        for (int i = 0; i < n; i++) {
                double e; 
                cin >> e;
                bulbs.push_back(e); 
        }
        sort(bulbs.begin(), bulbs.end()); 
        bulbs.push_back(l); 
        double maxDiff = calculateMaxDiff(bulbs); 
        double ans = maxDiff / 2; 
        ans = max(ans, bulbs[1] - bulbs[0]); 
        ans = max(ans, l - bulbs[(int)bulbs.size() - 2]); 
        cout << fixed << setprecision(10) << ans << endl; 
}