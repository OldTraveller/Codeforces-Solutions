#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
const int MAX_SIZE = 100005; 
int dp[MAX_SIZE]; 

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m; 
    cin >> n >> m; 
    vector<int> ele(n); 
    unordered_set<int> st; 
    for (int i = 0; i < n; i++) {
        cin >> ele[i]; 
    }
    for (int i = n - 1; i >= 0; i--) {
        st.insert(ele[i]); 
        dp[i] = st.size(); 
    }
    for (int i = 0; i < m; i++) {
        int l; cin >> l; 
        cout << dp[l - 1] << endl; 
    }
}