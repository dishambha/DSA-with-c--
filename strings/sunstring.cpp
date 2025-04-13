#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string s = "Dishambha";
    // //s.substr(idx,length)
    // cout<<s.substr(0,4);
    string str;
    cout<<"enter a string : ";
    getline(cin,str);
    // abcdefgh  ->n=8
    int n = str.length();
    for(int i=0;i<n;i++){
        cout<<str.substr(i)<<"  ";
    }
    cout<<str.substr();
}