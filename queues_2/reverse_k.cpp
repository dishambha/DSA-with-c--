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
void reverse(int k, queue<int>& q){
    stack<int> st;
    for(int i = 0; i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        int temp = q.front();
        q.pop();
        q.push(temp);
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
    int k = 3;
    reverse(k,q);
    display(q);
}
