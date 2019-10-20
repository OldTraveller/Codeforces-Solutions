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
        deque<int> numbers(n); 
        for (int &a : numbers) {
                cin >> a; 
        }
        sort(numbers.begin(), numbers.end()); 
        for (int i = 0; i < n; i++) {
                if (numbers.size() == 1) break; 
                if (i % 2 == 0) numbers.pop_back(); 
                else numbers.pop_front(); 
        }
        cout << numbers[0] << endl; 
}