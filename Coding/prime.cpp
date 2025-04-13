#include<iostream>
using namespace std;
int main(){
    int a , counter=0;
    cout<<"Enter the number to check: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        if(a%i==0)
        counter++;       
    }
    if(counter==2)
    cout<<"Number is prime ";
    else 
    cout<<"Number is composite ";
}