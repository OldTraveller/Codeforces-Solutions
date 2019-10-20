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
    priority_queue<int> pq; 
    cout << 0 << " "; 
    pq.push(times[0]); 
    int timeRem = m - times[0]; 
    for (int i = 1; i < n; i++) {
        priority_queue<int> pqTemp = pq; 
        int timeReq = times[i]; 
        int counts = 0; 
        if (timeRem < timeReq) {
            int tempTime = timeRem; 
            while (tempTime < timeReq and !pqTemp.empty()) {
                tempTime += pqTemp.top();
                pqTemp.pop(); 
                counts++; 
            }
        }
        pq.push(times[i]); 
        timeRem = timeRem - times[i]; 
        cout << counts << " ";
    }
}