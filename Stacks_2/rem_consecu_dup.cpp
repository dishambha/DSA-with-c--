#include<iostream>
#include<stack>
using namespace std;
string removeDuplicate(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.top()!=s[i]){
            st.push(s[i]);
        }
    }
    s = "";
    while(!st.empty()){
        s = st.top()+s;
        st.pop();
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    s = removeDuplicate(s);
    cout<<s<<endl;
}