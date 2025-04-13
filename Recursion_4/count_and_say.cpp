#include<iostream>
#include<string>
using namespace std;
string cas(int n){
    if(n==1) return "1";
    string str = cas(n-1);
    // str = 33 222 5 1 -> 23 32 15 11
    string ztr ="";
    int freq = 1;
    char ch = str[0];
    for(int i=1;i<str.length();i++){
        char dh = str[i];
        if(ch==dh){
            freq++;
        }
        else{ //ch!=dh
            ztr += (to_string(freq) + ch);
            freq = 1;
            ch = dh;
        }
    }
    ztr += (to_string(freq) + ch);
    return ztr;
}
int main(){
    int n = 4;
    cout<<cas(n);
}