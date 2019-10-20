#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool compare(tuple<LL, LL, LL> &t1, tuple<LL, LL, LL> &t2) {
        if (get<2>(t2) == get<2>(t1)) {
                return get<0>(t2) <= get<0>(t1); 
        } else {
                return get<2>(t2) <= get<2>(t1); 
        }
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;
        cin >> n;
        vector<LL> sticks(n); 
        for (int i = 0; i < n; i++) {
                cin >> sticks[i]; 
        }
        LL max_size = LONG_LONG_MIN; 
        sort(sticks.begin(), sticks.end()); 
        vector<tuple<LL, LL, LL>> possible; 
        for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                        for (int k = j + 1; k < n; k++) {
                                bool possi = sticks[i] + sticks[j] > sticks[k]; 
                                LL perimeter = sticks[i] + sticks[j] + sticks[k]; 
                                if (possi and perimeter >= max_size) {
                                        max_size = perimeter; 
                                        possible.push_back({sticks[i], sticks[j], sticks[k]}); 
                                } 
                        }
                }
        }
        if ((int)possible.size() == 0) {
                cout << "-1" << endl; 
        } else {
                auto ip = unique(possible.begin(), possible.end()); 
                possible.resize(distance(possible.begin(), ip)); 
                sort(possible.begin(), possible.end(), compare); 
                tuple<LL, LL, LL> ans = possible[0]; 
                cout << get<0>(ans) << " " << get<1>(ans) << " " << get<2>(ans) << endl; 
        }
}