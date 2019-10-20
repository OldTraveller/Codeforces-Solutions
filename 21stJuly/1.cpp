#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int s, v1, v2, t1, t2; 
        cin >> s >> v1 >> v2 >> t1 >> t2; 
        int first = 2 * t1 + s *v1;
        int second = 2 * t2 + s *v2;
        if (first == second) cout << "Friendship" << endl;
        else if (first < second) cout << "First" << endl;
        else cout << "Second" << endl; 
}