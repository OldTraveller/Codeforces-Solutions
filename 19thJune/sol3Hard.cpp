#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m; 
    vector<int> times(n); 
    for (int i = 0; i < n; i++) cin >> times[i]; 
    vector<int> temp = times;
    sort(temp.begin(), temp.end(), greater<int>()); 
    vector<LL> prefix_sum(n); 
    vector<LL> normal_prefix_sum(n); 
    prefix_sum[0] = temp[0]; 
    normal_prefix_sum[0] = times[0]; 
    for (int i = 1; i < n; i++) {
        normal_prefix_sum[i] = normal_prefix_sum[i - 1] + times[i]; 
    }   
    priority_queue<int> pq;
    pq.push(times[0]); 
    for (int i = 1; i < n; i++) {
        times[i] = pq.top() + 
    }
    cout << endl; 
    cout << "PREFIX SUM : " << endl; 
    for (int a : prefix_sum) cout << a << " ";
    cout << endl; 
    cout << "NORMAL PREFIX SUM " << endl; 
    for (int a : normal_prefix_sum) cout << a << " ";
    cout << endl;

    cout << 0 << " "; 
    for (int i = 1; i < n; i++) {
        int needed = m - normal_prefix_sum[i]; 
        if (needed >= 0) cout << 0 << " ";
        else {
            
        }
    }
}