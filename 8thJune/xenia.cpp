#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;
    int ones = 0;
    int twos = 0; 
    int threes = 0; 
    for (int i = 0; i < str.size(); i += 2) {
        if (str[i] == '1') ones++; 
        else if (str[i] == '2') twos++; 
        else if (str[i] == '3') threes++; 
    }
    int total = ones + twos + threes;
    int counts = 0; 
    for (int i = 1; i <= total; i++) {
        if (ones) {
            cout << 1; ones--; 
        } else if (twos) {
            cout << 2; twos--; 
        } else if (threes) {
            cout << 3; threes--; 
        }
        counts++;   
        if (counts != total) cout << "+"; 
    }
}