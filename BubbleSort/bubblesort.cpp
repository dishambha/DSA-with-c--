#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[6] = {4,5,6,1,2,3};
    int n= 6; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble sort
    for(int i=0;i<n-1;i++){
        //traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){//swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}