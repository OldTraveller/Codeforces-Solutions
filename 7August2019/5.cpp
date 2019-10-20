#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string first;
        string second;
        cin >> first >> second; 
        int hF, hS, mF, mS; 
        hF = int(first[0] - '0') * 10 + int(first[1] - '0'); 
        hS = int(second[0] - '0') * 10 + int(second[1] - '0'); 
        mF = int(first[3] - '0') * 10 + int(first[4] - '0'); 
        mS = int(second[3] - '0') * 10 + int(second[4] - '0'); 
        int totF = hF * 60 + mF; 
        int totS = hS * 60 + mS; 
        int tot = (totF + totS) >> 1; 
        int ansH = (tot / 60); 
        int ansM = (tot % 60); 
        if (ansH < 10) cout << "0" << ansH << ":";
        else cout << ansH << ":";  
        if (ansM < 10) cout << "0" << ansM; 
        else cout << ansM; 
        cout << "\n"; 
}