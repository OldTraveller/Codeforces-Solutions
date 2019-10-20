#include <bits/stdc++.h>
using namespace std;
typedef long long LL; 
const double PI = 3.141592654; 
const size_t SIZE = 1e5 + 77; 
vector<int> graph[SIZE]; 
bool visited[SIZE]; 
vector<int> cats(SIZE);
vector<int> leaves; 
int n, m; 
int total_paths; 

bool foundLeaf(int node) {
	return binary_search(leaves.begin(), leaves.end(), node); 
}

void dfs(int node, int consCat) {
	if (visited[node]) return; 
	else if (foundLeaf(node) and consCat <= m and node != 1) {
		total_paths++; 
	}
	else {
		visited[node] = 1;
		if (consCat > m) return;  
		for (int a : graph[node]) {
			int total = consCat; 
			if (cats[a]) total++; 
			else total = 0; 
			dfs(a, total); 
		}
	}
}


void displayGraph() {
	cout << "THE GRAPH IS : " << endl; 
	for (int i = 1; i <= n; i++) {
		cout << "NODE : " << i << " : ";
		for (int a : graph[i]) cout << a << " "; 
		cout << endl; 
	}
	cout << "LEAVES ARE : " << endl; 
	for (int a : leaves) {
		cout << a << " "; 
	}
	cout << endl;
	cout << "CATS : " << endl; 
	for (int i = 0; i < n + 1; i++) cout << cats[i] << " ";
	cout << endl;  
}


int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(nullptr); 

	cin >> n >> m; 
	for (int i = 1; i <= n; i++) {
		cin >> cats[i]; 
	}
	for (int i = 0; i < n - 1; i++) {
		int u, v; 
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);  
	}
	for (int i = 1; i <= n; i++) {
		if (graph[i].size() == 1) leaves.push_back(i); 
	}
	dfs(1, cats[1]); 
	cout << total_paths << endl; 
}
