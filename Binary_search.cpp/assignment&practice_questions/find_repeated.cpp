#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of an array : ";
    cin>>n;
    cout<<"Enter the elements of an array : ";
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int lo = 1;
    int hi = n;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==mid){ 
            lo = mid + 1;
        }
        else{
            hi = mid-1;
        }
    }
    cout<<hi;
}