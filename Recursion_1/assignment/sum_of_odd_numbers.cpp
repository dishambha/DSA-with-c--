#include<iostream>
using namespace std;
int SumOfOdd(int a , int b){
    if(a>b) return 0;
    if(a%2==0) return SumOfOdd(a+1,b);
    else return a+SumOfOdd(a+2,b);
}
int main(){
    int a ,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<SumOfOdd(a,b);
}