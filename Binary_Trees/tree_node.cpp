#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display_tree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display_tree(root->left);
    display_tree(root->right);
}
int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int mx(Node* root){
    if(root == NULL) return INT_MIN;
    return max(root->val, max(mx(root->left), mx(root->right)));
}
int height(Node* root){
    if(root == NULL) return 0;
    return(1 + max(height(root->left),height(root->left)));
}
int main(){ 
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b-> right = e;
    c->left = f;
    c->right = g;
    display_tree(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<mx(a)<<endl;
    cout<<height(a)<<endl;
}