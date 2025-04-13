#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n = str.length()/2;
    reverse((str.begin()+n),str.end());
    cout<<str;
}