//sum of the array
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the length of array :";
    cin>>n;
    //initialization
    int arr[n];
    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //add
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    //printing sum
    cout<<sum;
    return 0;
}