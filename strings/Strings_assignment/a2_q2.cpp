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
    char max = '!';
    char smax = '!';
    for(int i=0;i<str.length();i++){
        if(max<str[i]) {
            smax = max;
            max = str[i];
        }
        else if(smax<str[i] && max != str[i]){
            smax = str[i];
        }
    }
    cout<<smax;
}