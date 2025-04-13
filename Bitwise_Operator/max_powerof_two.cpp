#include<iostream>
using namespace std;
int max_power_of_two(int n){
    int x =0;
    while(n > 0){
        x = n;
        n = n&n-1;
    }
    return x;
}
int max_power_of_2_m2(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return (n+1)>>1;
}
int main(){
    int n = 24;
    cout<<max_power_of_two(n)<<endl<<max_power_of_2_m2(n);
}
