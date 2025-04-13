#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,1,6,2,5,3};
    int n = sizeof(arr)/sizeof(arr[n]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cycle sorting
    int i = 0;
    while(i<n){
        int correctIdx = arr[i] - 1;
        if(i==correctIdx) i++;
        else swap(arr[i], arr[correctIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}