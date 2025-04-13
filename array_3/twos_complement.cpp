#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of binary bits: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the binary number to find 2's complement: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==1){
            for(int j=i-1;j>=0;j--){
                if(arr[j]==1) arr[j]=0;
                else arr[j] = 1;
            }
            break;
        }
    }
    cout<<"The 2's complement is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}