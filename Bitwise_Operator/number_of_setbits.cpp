#include<iostream>
using namespace std;
int number_of_setbits(int n){
    int count = 0;
    while(n>0){
        n = n & n-1;
        count++;
    }
    return count;
}
int main(){
    int n = 301;
    cout<<number_of_setbits(n)<<endl;
    cout<<__builtin_popcount(n);
}