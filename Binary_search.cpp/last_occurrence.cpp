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
    int x;
    cout<<"Enter the element to search: ";
    cin>>x;
    int lo=0;
    int hi = n-1;
    bool flag = false;// 1 2 2 3 3 3 3 3 4 4 5 5 9
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                flag = true;
                cout<<mid;
                break;
            } 
            else{
                lo = mid+1;
            }
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid - 1;
    }
    if(flag==false) cout<<-1;
}