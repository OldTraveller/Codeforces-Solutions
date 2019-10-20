#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int arr[3][3]; 
        memset(arr, 0, sizeof(arr)); 
        vector<pair<int, int>> pos; 
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        int e; 
                        cin >> e; 
                        e %= 2;
                        if (e) pos.push_back({i, j}); 
                }
        }

        while (pos.size()) {
                int i = pos.back().first;
                int j = pos.back().second; 
                arr[i][j] = !arr[i][j]; 
                if (j - 1 >= 0) {
                        arr[i][j - 1] = !arr[i][j - 1]; 
                }
                if (i - 1 >= 0) {
                        arr[i - 1][j] = !arr[i - 1][j]; 
                }
                if (i + 1 < 3) {
                        arr[i + 1][j] = !arr[i + 1][j]; 
                }
                if (j + 1 < 3) {
                        arr[i][j + 1] = !arr[i][j + 1]; 
                }
                pos.pop_back(); 
        }
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        cout << !arr[i][j]; 
                }
                cout << "\n"; 
        }
}