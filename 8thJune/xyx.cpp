#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int yes, no, uk; 
    cin >> yes >> no >> uk; 
    if (yes + uk == no and no + uk == yes) {
        cout << "0" << endl; 
    } else if (yes + uk < no) {
        cout << "-" << endl; 
    } else if (no + uk < yes) {
        cout << "+" << endl; 
    } else {
        cout << "?" << endl; 
    }
}