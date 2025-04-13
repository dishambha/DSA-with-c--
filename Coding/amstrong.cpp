#include<iostream>
using namespace std;
int main(){
    int a ,n , b=0 ,n1;
    cout<<"Enter the number ";
    cin>>n;
    n1=n;
    while(n1>0){
        a = n1%10;
        b = b+(a*a*a);
        n1 = n1/10;
    }
    if (b==n)
    cout<<"Armstrong Number ";
    else 
    cout<<"Not an Armstrong Number : ";
    return 0;
}