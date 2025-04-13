#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j =1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k = 1;k<=n-1;k++){
        for(int l=k; l<=n-1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}