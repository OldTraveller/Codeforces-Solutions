#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string one, two; 
        cin >> one >> two;
        transform(one.begin(), one.end(), one.begin(), :: tolower); 
        transform(two.begin(), two.end(), two.begin(), :: tolower); 
        int value = 0; 
        for (int i = 0; i < one.size(); i++) {
                if (one[i] == two[i]) continue;
                else if (one[i] < two[i]) {
                        value = -1; 
                        break;
                } else {
                        value = 1;
                        break; 
                }
        }
        cout << value << endl; 
}