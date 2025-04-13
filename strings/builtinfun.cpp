#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    /*
    1. length()
    2. size()
    */
    // string str ="Dishambha Awasthi sends regards";
    // cout<<str.length()<<endl;
    // cout<<str.size();
    // int len = str.length();
    /*
    3. push_back()
    4. pop_back()
    */
    // string str ="dishambh";
    // cout<<str<<endl;
    // str.push_back('a');
    // cout<<str<<endl;
    // str.push_back('a');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    /*
    5. "+" operator
    */
    // string str ="abc";
    // cout<<str<<endl;
    // string stri = "def";
    // str= str + stri;
    // cout<<str<<endl; 
    /*
    6. reverse()
    */
   string s = "dishambha";
   cout<<s<<endl;
   reverse(s.begin()+2,s.end()-1);
   cout<<s<<endl;
}