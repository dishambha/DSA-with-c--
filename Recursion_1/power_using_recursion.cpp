#include<iostream>
using namespace std;
int power(int a , int b){
    if(b == 0) return 1;
    int ans = a*power(a,b-1);
    return ans;
}
int main(){
    cout<<power(3,4); //3 ki power 4
}