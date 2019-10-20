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
    char matrix[h][w]; 
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> matrix[i][j]; 
        }
    }
    vector<pair<int, int>> rows(h, {-1, -1}); 
    vector<pair<int, int>> cols(w, {-1, -1});  
    for (int i = 0; i < h; i++) {
        bool foundStar = false; 
        for (int j = 0; j < w; j++) {
            if (matrix[i][j] == '*' and foundStar) {
                rows[i].second = j;
            } else if (matrix[i][j] == '*') {
                foundStar = true; 
                rows[i].first = j; 
                rows[i].second = j; 
            }
        }
    }
    for (int i = 0; i < w; i++) {
        bool foundStar = false; 
        for (int j = 0; j < w; j++) {
            if (matrix[i][j] == '*' and foundStar) {
                cols[i].second = j;
            } else if (matrix[i][j] == '*') {
                foundStar = true; 
                cols[i].first = j; 
                cols[i].second = j; 
            }
        }
    }
    
    bool possible = false;
    int colsStar = -1; 
    int colStart = -1; 
    int colEnd = -1; 
    for (int i = 0; i < h; i++) {
        if (rows[i].first == -1) continue; 
        else if (rows[i].first == rows[i].second) {
            colsStar = rows[i].first; 
        } else {
            colStart = rows[i].first; 
            colEnd = rows[i].second; 
        }
    }
}