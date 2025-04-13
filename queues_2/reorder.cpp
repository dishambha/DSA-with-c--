#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> q){
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void reorder(queue<int>& q){
    stack<int> st;
    int n = q.size();
    //pop first half of the q to the st
    for(int i = 1;i<=n/2;i++){
        st.push(q.front());=
        q.pop();
    }
    // empty the st into q
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    // pop 2nd half (now the first) of the q to the st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // Most Important step (interleave one by one)
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // Reverse the q using stack
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reorder(q);
    display(q);
}