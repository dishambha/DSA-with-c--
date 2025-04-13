#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,n,temp;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        temp = a+b;
        a = b;
        b= temp;
        cout<<temp<<" ";
    }
    return 0;
}
