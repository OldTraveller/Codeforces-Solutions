#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int calculateUnique(vector<int> &counting_sort) {
        int ans = 0; 
        for (int i = 0; i < counting_sort.size(); i++) {
                if (counting_sort[i]) {
                        ans++; 
                }
        }
        return ans; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;
        cin >> n; 
        vector<int> counting_sort(1001, 0); 
        for (int i = 0; i < n; i++) {
                int e;
                cin >> e;
                counting_sort[e]++; 
        }
        int maxElement = *max_element(counting_sort.begin(), counting_sort.end()); 
        int uniqueElements = calculateUnique(counting_sort); 
        cout << maxElement << " " << uniqueElements << endl; 
}