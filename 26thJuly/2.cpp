#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
const int BITSET_SIZE = 64; 

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        LL x; 
        cin >> x;
        bitset<BITSET_SIZE> bits(x); 
        cout << bits.count() << endl; 
}