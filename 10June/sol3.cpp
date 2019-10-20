#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
const int SIZE = 5*1e5 + 7; 
int dp[SIZE][6]; 
int counts = 0; 

void copyPrevious(int pos) {
    for (int i = 0; i < 6; i++) {
        dp[pos][i] = dp[pos - 1][i]; 
    }
}

bool runCheck(int pos) {
    for (int i = 0; i < 6; i++) {
        if (!dp[pos][i]) return false;
    }
    return true;
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n; 
    for (int i = 0; i < n; i++) {
        int ele; cin >> ele; 
        if (i > 0) copyPrevious(i); 
        if (ele == 4) dp[i][0]++; 
        else if (ele == 8 and dp[i][0]) dp[i][1]++; 
        else if (ele == 15 and dp[i][1]) dp[i][2]++; 
        else if (ele == 16 and dp[i][2]) dp[i][3]++; 
        else if (ele == 23 and dp[i][3]) dp[i][4]++; 
        else if (ele == 42 and dp[i][4]) dp[i][5]++; 
        if (runCheck(i)) {
            counts++; 
            for (int j = 0; j < 6; j++) dp[i][j]--;
            bool makeZero = false; 
            for (int j = 0; j < 6; j++) {
                if (dp[i][j] == 0) makeZero = true; 
                if (makeZero) dp[i][j] = 0; 
            }
        }
    }
    cout << n - 6*counts << endl; 
}