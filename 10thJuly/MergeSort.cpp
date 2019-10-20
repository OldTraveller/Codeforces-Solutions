#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
	int n1 = m - l + 1; 
	int n2 = r - m; 
	int first[n1], second[n2]; 
	for (int i = 0; i < n1; i++) {
		first[i] = arr[l + i]; 
	}
	for (int i = 0; i < n2; i++) {
		second[i] = arr[m + i + 1]; 
	}
	int i = 0; 
	int j = 0; 
	int k = l; 
	while (i < n1 and j < n2) {
		if (first[i] < second[j]) {
			arr[k] = first[i++]; 
		} else {
			arr[k] = second[j++]; 
		}
		k++; 
	}
	
	while (i < n1) arr[k++] = first[i++]; 
	while (j < n2) arr[k++] = second[j++]; 
}

void mergeSort(int arr[], int l, int r) {
	if (l < r) {
		int mid = (l + r)/2; 
		mergeSort(arr, l, mid); 
		mergeSort(arr, mid + 1, r); 
		merge(arr, l, mid, r); 
	}
}

void displayArray(int arr[], int n) {
	for (int i = 0; i < n; i++) cout << arr[i] << " "; 
	cout << endl; 
}

int main() {
	int arr[] = {10,9,8,7,6,5,4,3,2,1}; 
	int n = sizeof(arr)/sizeof(int); 
	cout << "THE ARRAY BEFORE : " << endl; 
	displayArray(arr, n); 
	mergeSort(arr, 0, n - 1); 
	cout << "THE ARRAY AFTER : " << endl; 
	displayArray(arr, n); 
}
