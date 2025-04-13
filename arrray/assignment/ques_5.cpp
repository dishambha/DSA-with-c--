#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                x = arr[i];
                arr[i] = arr[j];
                arr[j] =x;
            }
        }
    }
    cout<<"the smallest possitive number is "<<arr[0]-1;
}