#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        LL n, k;
        cin >> n >> k;
        double totRed = n * 2;
        double totGreen = n * 5; 
        double totBlue = n * 8;
        totRed = ceil(totRed / k); 
        totGreen = ceil(totGreen / k); 
        totBlue = ceil(totBlue / k); 
        cout << LL(totRed + totGreen + totBlue) << endl; 
}