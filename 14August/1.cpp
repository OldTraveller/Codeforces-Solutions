#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool isVowel(const char ch) {
        return ch == 'a' or ch == 'A' or 
               ch == 'e' or ch == 'E' or 
               ch == 'i' or ch == 'I' or 
               ch == 'o' or ch == 'O' or 
               ch == 'u' or ch == 'U' or 
               ch == 'y' or ch == 'Y';  
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string str; 
        cin >> str; 
        for (int i = 0; i < (int)str.size(); i++) {
                if (isVowel(str[i])) continue; 
                else {
                        cout << "."; 
                        if (str[i] < 97) {
                                cout << char(str[i] + 32); 
                        } else {
                                cout << str[i]; 
                        }
                }
        }
        cout << "\n"; 
}