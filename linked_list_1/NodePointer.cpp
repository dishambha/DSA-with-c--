#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int size(Node* head){
    int n = 0;
    while(head!=NULL){
        n++;
        head = head->next;
    }
    return n;
}
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void insertAtEnd(Node* head, int val){
    Node* t = new Node(val);
    while(head->next != NULL){
        head = head->next;
    }
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    //display(a);
    displayrec(a);
    cout<<endl;
    insertAtEnd(a,80);
    display(a);
    cout<<size(a);
}