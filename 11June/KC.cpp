#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int h, w; 
    cin >> h >> w; 
    int matrix[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char ch; cin >> ch; 
            if (ch == '*') matrix[i][j] = 1; 
            else matrix[i][j] = 0; 
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 1; j < w; j++) {
            matrix[i][j] = matrix[i][j - 1] + (matrix[i][j] == 1); 
        }
    }
}