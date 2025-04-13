#include<iostream>
using namespace std;
int main(){
    int a , n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n ; j>=i ; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}