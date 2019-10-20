#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int wB = 0; 
        int wW = 0; 
        for (int i = 0; i < 8; i++) {
                string str;
                cin >> str;
                for (char ch : str) {
                        if (ch == 'Q') {
                                wW += 9;
                        } else if (ch == 'q') {
                                wB += 9; 
                        } else if (ch == 'R') {
                                wW += 5; 
                        } else if (ch == 'r') {
                                wB += 5; 
                        } else if (ch == 'B') {
                                wW += 3; 
                        } else if (ch == 'b') {
                                wB += 3; 
                        } else if (ch == 'N') {
                                wW += 3; 
                        } else if (ch == 'n') {
                                wB += 3;
                        } else if (ch == 'P') {
                                wW += 1;
                        } else if (ch == 'p') {
                                wB += 1;
                        }
                }
        }
        if (wW == wB) cout << "Draw" << endl; 
        else if (wW > wB) cout << "White" << endl; 
        else cout << "Black" << endl; 
}