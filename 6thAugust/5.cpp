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
        bool arr[n]; 
        for (int i = 0; i < n; i++) {
                cin >> arr[i]; 
        }
        int counts = 0; 
        for (int i = 1; i < n - 1; i++) {
                if (arr[i - 1] and arr[i + 1] and !arr[i]) {
                        arr[i + 1] = 0; 
                        counts++; 
                }
        }
        cout << counts << endl; 
}