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
    vector<int> welfares(n); 
    for (int i = 0; i < n; i++) cin >> welfares[i]; 
    int richest = *max_element(welfares.begin(), welfares.end()); 
    int total = 0; 
    for (int wealth : welfares) {
        total += (richest - wealth); 
    }
    cout << total << '\n'; 
}