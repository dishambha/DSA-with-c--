#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string 1: ";
    cin>>str;
    string str1;
    cout<<"Enter the string 2: ";
    cin>>str1;
    sort(str.begin(),str.end());
    sort(str1.begin(),str1.end());
    if(str == str1){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}