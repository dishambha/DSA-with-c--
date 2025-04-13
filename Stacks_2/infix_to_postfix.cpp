#include<iostream>
#include<stack>
#include<string>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // *,/
}
string solve(string val1, string val2, char ch){
    //we have to store prefix in the ans
    //prefix is -> op v1 v2
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}
int main(){
    string s = "(7+9)*4/8-3"; //infix expression
    // we need 2 stacks 1 for value and 1 for operator
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        //check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){ //digit
            val.push(to_string(s[i]-48));
        }
        else{ //s[i] it is -> *, /, +,-
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);    
            else if(s[i]==')'){
                while(op.top() != '('){
                    //work
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop(); // pop opening bracket
            }
            else if (priority(s[i])>priority(op.top())) op.push(s[i]);  
            else { //priority(s[i]) <= priority(op.top())
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                    // i have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    } 
    //the operator stack can have values.
    //so make it empty
    while(op.size()>0){
        // work
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
}