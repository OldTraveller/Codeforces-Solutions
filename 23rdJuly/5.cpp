#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool isLucky(int counts) {
        while (counts) {
                if (counts % 10 != 7 and counts % 10 != 4) {
                        return 0; 
                } else {
                        counts /= 10; 
                }
        }
        return 1; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string n;
        cin >> n;
        int counts = 0; 
        for (char ch : n) {
                if (ch == '7' or ch == '4') counts++; 
        }
        if (isLucky(counts) and counts != 0) cout << "YES" << endl; 
        else cout << "NO" << endl; 
}