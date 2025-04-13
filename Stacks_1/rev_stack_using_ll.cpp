#include<iostream>
#include<stack>
using namespace std;
class node{
public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(stack<int> st){
    stack<int> temp;
    while (st.size())
    {
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st
    while (temp.size()){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10); // 1
    st.push(20); // 2
    st.push(30); // 3
    st.push(40); // 4
    st.push(50); // 5
    print(st);
    node* temp = new node(0);
    node* head = temp;
    while(st.size()){
        node* a = new node(st.top());
        a->prev = temp;
        temp->next = a;
        temp = temp->next;
        st.pop();
    }
    head = head->next;
    while(head){
        st.push(head->val);
        head = head->next;
    }
    print(st);
}