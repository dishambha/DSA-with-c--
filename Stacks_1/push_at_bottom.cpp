#include<iostream>
#include<stack>
using namespace std;
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
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtIndex(stack<int>& st,int idx,int val){
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;// indexes
    st.push(10); // 0+1 = 1
    st.push(20); // 1+1 = 2
    st.push(30); // 2+1 = 3 + 1 = 4
    st.push(40); // 3+1 = 4 + 1 = 5
    st.push(50); // 4+1 = 5 + 1 = 6
    st.push(60); // 5+1 = 6 + 1 = 7
    print(st); 
    pushAtBottom(st,80); //0
    print(st);
    pushAtIndex(st,3,90); //3
    print(st);
}
