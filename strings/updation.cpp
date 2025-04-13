#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str ="dishambha";
    // cout<<str<<endl;
    // for(int i=0;str[i]!='\0';i++){
    //     if(i%2==0) str[i] ='a';
    // }
    // cout<<str<<endl;
    int n;
    cout<<"Enter the length of string: ";
    cin>>n;
    char str[n];
    cin>>str;
    cout<<endl;
    for(int i=0;i<n;i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str;
}