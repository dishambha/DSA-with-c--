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
int flip_bits(int n){
    int p = n;
    int x =0;
    while(n > 0){
        x = n;
        n = n & n-1;
    }
    x = (x*2) -1;
    int ans = p^x;
    return ans;

}
int main(){
    int n = 23;
    cout<<decimal_to_binary(flip_bits(n));
}