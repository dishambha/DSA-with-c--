#include<iostream>
using namespace std;
string decimal_to_binary(int num){
    string res = "";
    while(num >  0){
        if(num % 2 ==0){
            //even
            res = "0" + res;
        }
        else{
            //odd
            res = "1" + res;
        }
        num = num >> 1;
    }
    return res;
}
int main(){
    cout<<decimal_to_binary(13)<<endl;
}