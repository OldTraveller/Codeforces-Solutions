#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const double PI = 3.141592654 ;

int main() {
    ios :: sync_with_stdio(false) ;
    cin.tie( nullptr ) ;
    cout.tie( nullptr ) ;

    int t; cin >> t; 
    while (t--) {
        int n; cin >> n; 
        string phone;
        cin >> phone; 
        bool possible = phone.length() >= 11; 
        if (!possible) {
            cout << "NO" << endl; 
        } else {
            int pos = phone.length(); 
            for (int i = phone.length() - 1; i >= 0; i--) {
                if (phone[i] == '8') pos = i; 
            }
            if (phone.length() - (pos + 1) >= 11) {
                cout << "YES" << endl; 
            } else {
                cout << "NO" << endl; 
            }
        }
    }    
}