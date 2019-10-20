#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int groups = 1; 
    string previous; cin >> previous;
    n--; 
    while(n--) {
        string now; cin >> now; 
        if (now != previous) groups++; 
        previous = now;
    }
    cout << groups << endl;
}