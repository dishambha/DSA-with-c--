#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    cin >> str;
    string s = str;
    reverse(s.begin(),s.end());
    str = str+s;
    cout<<str;
}