#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=1;i<=n ; i++){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        for(int k =1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}