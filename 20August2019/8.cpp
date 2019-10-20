#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
 
int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
 
        int n; 
        cin >> n; 
        unordered_set<int> justOne; 
        int matrix[n][n]; 
        memset(matrix, 0, sizeof matrix); 
        for (int i = 0; i < n; i++) {
                string str;
                cin >> str;
                for (int j = 0; j < (int)str.size(); j++) {
                        if (str[j] == '1') {
                                matrix[i][j] = 1; 
                        }
                }
        }
        for (int j = 0; j < n; j++) {
                int ones = 0; 
                for (int i = 0; i < n; i++) {
                        if (matrix[i][j] == 1) {
                                ones++; 
                        }
                }
                if (ones == 1) justOne.insert(j + 1); 
        }
        int m; 
        cin >> m; 
        vector<int> copy; 
        for (int i = 0; i < m; i++) {
                int e; 
                cin >> e;
                copy.push_back(e); 
        }
        int last = copy[copy.size() - 1]; 
        for (int i = 0; i < copy.size() - 1; i++) {
                bool one = justOne.find(copy[i]) != justOne.end(); 
                bool two = justOne.find(copy[i + 1]) != justOne.end(); 
                if (one and two) {
                        copy[i + 1] = copy[i]; 
                } else if (!one and !two) {
                        copy[i + 1] = copy[i]; 
                }
        }
        copy[copy.size() - 1] = last;
        for (int i = copy.size() - 1; i > 0; i--) {
                bool one = justOne.find(last) != justOne.end(); 
                bool two = justOne.find(copy[i - 1]) == justOne.end(); 
                if (one and two) break; 
                else {
                        copy[i - 1] = last; 
                }
        }
        vector<int> pathsDistinct;
        pathsDistinct.push_back(copy[0]); 
        for (int i = 1; i < copy.size() - 1; i++) {
                if (copy[i] == pathsDistinct.back()) continue;
                else {
                        pathsDistinct.push_back(copy[i]); 
                }
        }
        if (justOne.size() == 0) {
                cout << copy.size() << endl;
                for (int a : copy) cout << a << " "; 
        } else {
                cout << pathsDistinct.size() << endl; 
                for (int a : pathsDistinct) {
                        cout << a << " ";
                }
        }
}