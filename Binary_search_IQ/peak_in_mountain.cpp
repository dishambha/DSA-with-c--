#include<iostream>
using namespace std;
int main(){
    //index      0 1 2 3 4 5 6
    int arr[] = {1,2,3,5,3,2,0};
    int n = 7;

    int lo = 1;
    int hi = n-2;
    int peakIdx= -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1] ){
            peakIdx = mid;
            break; 
        }
        else if(arr[mid-1]< arr[mid] && arr[mid]<arr[mid+1]){
            lo = mid+1;
        }
        else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]){
            hi=mid-1;
        }
    }
    cout<<"PEAK INDEX IS : "<<peakIdx;
}