#include<iostream>
#include<string>
using namespace std;
int hcf(int a, int b){
    for(int i = min(a,b);i>=2;i--){  //tc = O(min(a,b))
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int gcd(int a, int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a = 100089;
    int b = 564453;
    cout<<gcd(a,b);
}