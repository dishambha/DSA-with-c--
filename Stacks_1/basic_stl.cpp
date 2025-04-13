#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    // cout<<st.size()<<endl; //0
    st.push(10); // 1
    st.push(20); // 2
    st.push(30); // 3
    st.push(40); // 4
    st.push(50); // 5
    // cout<<st.size()<<endl; // 5
    // st.pop(); // 4
    // cout<<st.size()<<endl; // 4
    // cout<<st.top();

    // printing in reverse
    // using extra stack
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
    cout<<endl<<st.top();
}