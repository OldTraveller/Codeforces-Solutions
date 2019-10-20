#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool isVowel(const char ch) {
        return ch == 'a' or ch == 'e' or ch == 'i' or 
               ch == 'o' or ch == 'u'; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string first, second; 
        cin >> first >> second; 
        if (first.size() != second.size()) {
                cout << "No" << endl;
        } else {
                int size = (int)first.size(); 
                vector<bool> one(size, 0); 
                vector<bool> two(size, 0); 
                for (int i = 0; i < size; i++) {
                        if (isVowel(first[i])) one[i] = 1; 
                        if (isVowel(second[i])) two[i] = 1; 
                }
                bool convert = 1; 
                for (int i = 0; i < size; i++) {
                        if (one[i] != two[i]) {
                                convert = 0; 
                                break; 
                        }
                }
                if (convert) cout << "Yes" << endl;
                else cout << "No" << endl; 
        }
}