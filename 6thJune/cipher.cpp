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
    string s; 
    cin >> s; 
    int which = 0; 
    int total = (-1 + sqrt(1 + 4*(n*2)))/2;
    for (int i = 1; i <= total; i++) {
        cout << s[which]; which += i; 
    }
}