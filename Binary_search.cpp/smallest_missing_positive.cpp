#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of an array : ";
    cin>>n;
    cout<<"Enter the elements of an array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo=0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==mid){ 
            lo = mid + 1;
        }
        else{
            ans = mid;
            hi = mid-1;
        }
    }
    cout<<ans;
}