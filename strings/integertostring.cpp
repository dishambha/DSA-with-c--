#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter the number: ";
    int x;
    cin>>x;
    string s = to_string(x);
    cout<<s.length();
}