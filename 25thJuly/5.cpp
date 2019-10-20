#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool isDistinct(int year) {
        set<int> num; 
        int counts = 0; 
        while (year) {
                counts++; 
                num.insert(year % 10); 
                year /= 10; 
        }
        return num.size() == counts; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int year; 
        cin >> year; 
        int ans = 0;
        int check = year + 1; 
        while (!ans) {
                if (isDistinct(check)) {
                        ans = check; 
                } else {
                        check++; 
                }
        }
        cout << ans << endl; 
}