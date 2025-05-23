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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt(int idx, int val){
        if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else if(idx<0 || idx>size) cout<<"Invalid"<<endl;
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size==0) cout<<"List is Empty";
        else if(idx<0 || idx>size) cout<<"Invalid";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node*temp = head;
            for(int i=1;i<idx;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";           
            temp = temp->next;
        }   
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(10); // {10->NULL}
    ll.display();
    ll.insertAtTail(20); // (10->20->NULL)
    ll.display();
    ll.insertAtTail(30); // {10->20->30->NULL}
    ll.display();
    ll.insertAtTail(40); // {10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(5); // {5->10->20->30->40->NULL}
    ll.display();
    ll.insertAt(3,25); // {5->10->20->25->30->40->NULL}
    ll.display();
    cout<<ll.getAtIdx(2)<<endl; // (20)
    ll.deleteAtHead(); // {10->20->25->30->40->NULL}
    ll.display();
    ll.deleteAtTail(); // {10->20->25->30->NULL}
    ll.display();
    ll.deleteAtIdx(2); // {10->20->30->NULL}
    ll.display(); // {10->20->30->NULL}
    cout<<ll.size<<endl; // (3)
}