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
        bool alter = 0; 
        while (n) {
                if (alter) {
                        cout << "a"; 
                } else {
                        cout << "b"; 
                }
                n--; 
                if (n) {
                        if (alter) {
                                cout << "a"; 
                        } else {
                                cout << "b";
                        }
                } else break; 
                n--; 
                alter = !alter; 
        }
        cout << "\n"; 
}