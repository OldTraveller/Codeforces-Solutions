#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int findMax(vector<int> &vec) {
        int maxi = INT_MIN; 
        for (int i = 0; i < vec.size(); i++) {
                maxi = max(maxi, vec[i]); 
        }
        return maxi; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int a, b, c;
        cin >> a >> b >> c; 
        vector<int> vec;
        vec.push_back(a + b + c); 
        vec.push_back(a * b + c); 
        vec.push_back(a + b * c); 
        vec.push_back(a * b * c); 
        vec.push_back((a + b) * c); 
        vec.push_back(a * (b + c)); 
        int max_i = findMax(vec); 
        cout << max_i << endl; 
}