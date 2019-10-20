#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m; 
	map<string, pair<string, string>> words; 
	for (int i = 0; i < m; i++) {
		string first, second;
		cin >> first >> second;
		words[first] = {first, second}; 
	}	
	for (int i = 0; i < n; i++) {
		string word; 
		cin >> word;
		if (words[word].first.size() <= words[word].second.size()) cout << words[word].first << " "; 
		else cout << words[word].second << endl;
	}
}
