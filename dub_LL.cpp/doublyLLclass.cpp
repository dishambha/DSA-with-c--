#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; //extra (for dll)
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; //extra (for dll)
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
            t->prev = temp; //extra (dll)
            t->next->prev = t; //extra (dll)
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
            if(idx<size/2){
                Node* temp = head;
                for(int i=1;i<=idx;i++){
                    temp = temp->prev;
                }
                return temp->val;
            }
            else{
                Node* temp = tail;
                for(int i=1;i<size-idx;i++){
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        head = head->next;
        if(head!= NULL) head->prev = NULL; //extra (dll)
        if(head == NULL) tail = NULL; // extra (dll)
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(size==1){ //extra (dll)
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev; // new (modified) for dll
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
            if(idx<size/2){
                Node*temp = head;
                for(int i=1;i<=idx;i++){
                    temp = temp->next;
                }
                temp->next = temp->next->next;
                temp->next->prev = temp; //extra
                size--;
            }
            else{
                Node* temp = tail;
                for(int i=1;i<=size-idx;i++){
                    temp = temp->prev;
                }
                temp->next = temp->next->next;
                temp->next->prev = temp;
                size--;
            }
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
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.insertAtTail(60);
    list.display();
    // list.insertAtTail(70);
    // list.insertAtHead(5);
    // list.display();
    // list.deleteAtHead();
    // list.display();
    // list.deleteAtTail();
    // list.display();
    // list.insertAtTail(80);
    // list.deleteAtIdx(3);
    // list.display();
    // list.insertAtTail(40);
    // list.insertAtHead(90);
    // list.display();
    // cout<<list.getAtIdx(0);
    list.deleteAtIdx(0);
    list.display();
    list.deleteAtIdx(3);
    list.display();
}