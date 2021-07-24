#include<bits/stdc++.h>
using namespace std;

// In this Code, we are just creating binary search tree..
struct Node{

    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){

    data = val;
    left = NULL;
    right = NULL;
    }
};

int main()
{
    struct Node* root = new Node(1);
    // it creates the root node for tree
    root->left = new Node(2);
    root->right = new Node(3);
    //two level of tree are formed

    root->left->left = new Node(4);
    root->right->left = new Node(5);

    return 0;



}

