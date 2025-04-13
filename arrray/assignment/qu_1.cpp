//Find the product of array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int product = 1;
    for(int i=0;i<n;i++){
        product = product*arr[i];
    }
    cout<<"The product of the elements of an array is : "<<product;
    return 0;
}