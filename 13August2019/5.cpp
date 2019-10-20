#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
const int MAX_SIZE = 1e6 + 7;
vector<LL> primes; 

void sieve() {
        bool prime[MAX_SIZE]; 
        memset(prime, 1, sizeof prime); 
        for (int p = 2; p * p <= MAX_SIZE; p++) {
                if (prime[p]) {
                        for (int k = p * p; k <= MAX_SIZE; k += p) {
                                prime[k] = 0; 
                        }
                }
        }
        for (int i = 1; i <= MAX_SIZE; i++) {
                if (prime[i]) primes.push_back(i); 
        }
}

bool checkDivisible(vector<LL> &ele, int n) {
        for (int i = 0; i < ele.size(); i++) {
                if (ele[i] % n != 0) return 0; 
        }
        return 1; 
}

void balanceEverything(vector<LL> &ele, int n) {
        for (int i = 0; i < ele.size(); i++) {
                while (ele[i] % n == 0) {
                        ele[i] /= n; 
                }
        }
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        sieve(); 
        vector<int> ans = {1}; 
        int n; 
        cin >> n; 
        vector<LL> ele(n); 
        LL min_ele = LONG_LONG_MAX; 
        for (int i = 0; i < n; i++) {
                cin >> ele[i]; 
                min_ele = min(min_ele, ele[i]); 
        }
        for (int i = 2; i < primes.size(); i++) {
                if (primes[i] > min_ele) {
                        break; 
                }
                bool c = checkDivisible(ele, primes[i]);
                if (c) {
                        balanceEverything(ele, primes[i]); 
                        ans.push_back(primes[i]); 
                }
        }
}