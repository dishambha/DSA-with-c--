#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
    if(st.empty()) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void push_at_bottom(stack<int>& st,int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    push_at_bottom(st, val);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1) return;
    int val = st.top();
    st.pop();
    reverse(st);
    push_at_bottom(st,val);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40); 
    st.push(50);
    st.push(60); 
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
}