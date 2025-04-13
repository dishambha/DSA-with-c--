#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;// base case 
    cout<<n<<" ";// call 
    print(n-1); // kaam
   
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    print(n);
}