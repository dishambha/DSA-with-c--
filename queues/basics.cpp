#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    for(int i=0; i<q.size();i++){
        cout<<q.front()<<" ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>& q){
    stack<int> st;
    // empty the queue into stack
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // empty the stack into the queue
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    // push
    // pop
    // front -> first element
    // back -> last element
    // size 
    // empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    display(q);
    reverse(q);
    display(q);
}