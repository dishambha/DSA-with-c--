#include<iostream>
#include<stack>
#include<string>
using namespace std;
void isBalanced(string s){
    stack<char> st;
    int n = s.length();
    if(s[0]==')' || n%2 != 0 || n==0){
        cout<<"String not balanced.";
        return ;
    }
    for(int i = 0;i<n;i++){
        if(s[i]=='(') st.push(s[i]);
        else{ //s[i] =')'
            if(st.size()==0){
                cout<<"String not balanced.";
                return ;
            }
            else st.pop();
        }  
    }
    if(st.empty()) cout<<"String is Balanced.";
    else cout<<"String is Not Balanced.";
}
int main(){
    string s;
    cout<<"Enter the Required String: ";
    cin>>s;
    isBalanced(s);
}