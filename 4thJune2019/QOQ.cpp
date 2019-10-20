#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int calPrevious(string str, int pos) {
    int counts = 0; 
    for (int i = 0; i < pos; i++) {
        if (str[i] == 'Q') counts++; 
    }
    return counts; 
}

int calAfter(string str, int pos) {
    int counts = 0; 
    for (int i = pos + 1; i < str.size(); i++) {
        if (str[i] == 'Q') counts++; 
    }
    return counts; 
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str; 
    cin >> str; 
    int ans = 0; 
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'A') {
            int before = calPrevious(str, i); 
            int after = calAfter(str, i); 
            ans += before * after; 
        }
    }
    cout << ans << '\n'; 
}