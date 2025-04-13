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
class Deque{
    public:
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head = tail = NULL;
        size = 0;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; //extra (for dll)
            tail = temp;
        }
        size++;
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; //extra (for dll)
            head = temp;
        }
        size++;
    }
    void pop_front(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        head = head->next;
        if(head!= NULL) head->prev = NULL; //extra (dll)
        if(head == NULL) tail = NULL; // extra (dll)
        size--;
    }
    void pop_back(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(size==1){ //extra (dll)
            pop_front();
            return;
        }
        Node* temp = tail->prev; // new (modified) for dll
        temp->next = NULL;
        tail = temp;
        size--;
    }
    int front(){
        if(size==0){
            cout<<"Queue is Empty!";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Queue is Empty!";
            return -1;
        }
        return tail->val;
    }
    int Size(){
        return size;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
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
    Deque dq;
    cout<<"PUSH BACK"<<endl;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    dq.display();
    cout<<"POP BACK"<<endl;
    dq.pop_back();
    dq.display();
    cout<<"POP FRONT"<<endl;
    dq.pop_front();
    dq.display();
    cout<<"PUSH FRONT"<<endl;
    dq.push_front(10);
    dq.display();
    cout<<"PUSH BACK"<<endl;
    dq.push_back(60);
    dq.display();
}