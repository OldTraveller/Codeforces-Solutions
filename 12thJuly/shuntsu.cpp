#include <bits/stdc++.h>
using namespace std;
bool matrix[4][10];

int main() {
	string first, second, third; 
	cin >> first >> second >> third; 
	unordered_map<string, int> counts; 
	counts[first]++; 
	counts[second]++; 
	counts[third]++; 
	char fch = first[1]; 
	char sch = second[1]; 
	char tch = third[1]; 
	int fnum = int(first[0] - '0'); 
	int snum = int(second[0] - '0'); 
	int tnum = int(third[0] - '0'); 
	if (fch == 'm') matrix[1][fnum] = 1;
	if (fch == 'p') matrix[2][fnum] = 1;
	if (fch == 's') matrix[3][fnum] = 1; 
	if (sch == 'm') matrix[1][snum] = 1;
	if (sch == 'p') matrix[2][snum] = 1;
	if (sch == 's') matrix[3][snum] = 1; 
	if (tch == 'm') matrix[1][tnum] = 1;
	if (tch == 'p') matrix[2][tnum] = 1;
	if (tch == 's') matrix[3][tnum] = 1; 
	int maxCounts = 0; 
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 7; j++) {
			maxCounts = max(maxCounts, matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2]);						
		}
	}
	for (auto i : counts) {
		maxCounts = max(maxCounts, i.second);
	}	
	cout << 3 - maxCounts << endl;
}
