#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void printFactor(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) cout<<i<<" * "<<n/i<<"  "<<endl;
    }
}
int main(){
    printFactor(15);
} 