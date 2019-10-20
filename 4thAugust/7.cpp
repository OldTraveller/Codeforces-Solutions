#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int a, b, c, d; 
        cin >> a >> b >> c >> d; 
        int misha = max((3 * a)/10, a - (a / 250) * c); 
        int vasya = max((3 * b)/10, b - (b / 250) * d); 
        if (misha == vasya) {
                cout << "Tie" << endl; 
        } else if (misha > vasya) {
                cout << "Misha" << endl; 
        } else {
                cout << "Vasya" << endl;
        }
}