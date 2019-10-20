#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

struct node {
    int data;
    node* left;
    node* right; 
    node(int data) : data(data), left(nullptr), right(nullptr) {} 
}; 

void deleteNode(node* root) {
    if (root) {
        deleteNode(root -> left); 
        deleteNode(root -> right); 
        cout << "DELETING : " << root -> data << endl; 
        delete root; 
        root = nullptr; 
    }
}

void inorder(node* root) {
    if (root) {
        inorder(root -> left); 
        cout << root -> data << endl; 
        inorder(root -> right); 
    }
}

node* findLCR(node* root, int n1, int n2) {
    if (root) {
        if (root -> data == n1 or root -> data == n2) return root; 
        node* leftLCR = findLCR(root -> left, n1, n2); 
        node* rightLCR = findLCR(root -> right, n1, n2); 
        if (leftLCR and rightLCR) return root; 
        else {
            if (leftLCR == nullptr) return rightLCR; 
            else return leftLCR; 
        }
    } else {
        return nullptr; 
    }
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    node* root = new node(10); 
    root -> left = new node(12); 
    root -> right = new node(20); 
    root -> left -> left = new node(30); 
    root -> right -> left = new node(100); 
    root -> right -> right = new node(300); 

    node* LCR100and30 = findLCR(root, 100, 300); 
    cout << "LCR IS : " << LCR100and30 -> data << endl; 
    deleteNode(root); 
}