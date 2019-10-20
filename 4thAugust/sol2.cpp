#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool checkResulting(deque<LL> &dq) {
        if (dq.size() == 1) return 0; 
        else {
                while (dq.size() != 0) {
                        if (dq.size() == 1) return 0;
                        if (dq.front() == 0) dq.pop_front();
                        if (dq.back() == 0) dq.pop_back(); 
                        if (dq.size() == 0) return 1; 
                        if (dq.size() == 1) return 0; 
                        if (dq.size() > 1) {
                                LL mini = min(dq.front(), dq.back()); 
                                dq.front() -= mini; 
                                dq.back() -= mini; 
                        }
                }
                return 1; 
        }
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        map<LL, LL> mp; 
        int n; 
        cin >> n; 
        for (int i = 0; i < n; i++) {
                LL e;
                cin >> e;
                mp[e]++; 
        }
        deque<LL> resulting; 
        for (auto i : mp) {
                if (i.second & 1) {
                        resulting.push_back(i.first); 
                }
        }
        if (resulting.size() == 0) {
                cout << "YES" << endl; 
        } else {
                if (checkResulting(resulting)) {
                        cout << "YES" << endl; 
                } else {
                        cout << "NO" << endl; 
                }
        }
}