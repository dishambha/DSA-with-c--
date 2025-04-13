#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while (st.size())
    {
        // cout<<st.top()<<" ";
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
    stack<int> temp1;
    while(st.size()){
        temp1.push(st.top());
        st.pop();
    }
    stack<int> temp2;
    while(temp1.size()){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size()){
        st.push(temp2.top());
        temp2.pop();
    }
    print(st);
}