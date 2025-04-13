#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n ;//size of array
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    //array input
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    //insertion sort 
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    //if first element is zero
    if(arr[0]==0){
        swap(arr[0],arr[1]);
    }
    //printing sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //copying the sorted array to second array 
    int sarr[n];
    for(int i=0;i<n;i++){
        sarr[i] = arr[i];
    }
    //swaping the last two different digits to make it second smallest
    for(int i = n-1;i>0;i--){
        if(sarr[i] != sarr[i-1]){ 
            swap(sarr[i],sarr[i-1]);
            break;
        }
    }
    //printing the second smallest array
    for(int i=0;i<n;i++){
        cout<<sarr[i]<<" ";
    }
    cout<<endl;
    //converting both the arrays to number
    int min1 = 0;
    int min2 = 0;
    for(int i=0;i<n;i++){
        min1 *= 10;
        min1 += arr[i];
        min2 *= 10;
        min2 += sarr[i];
    }
    //printing the sum
    cout<<min1+min2;
}