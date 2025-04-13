#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    //BRUTE FORCE ALGORITHM
    // int maxSum = INT_MIN;
    // int maxIdx= -1;
    // for(int i=0;i<=n-k;i++){
    //     int sum =0;
    //     for(int j =i;j<i+k;j++){
    //         sum += arr[j];
    //     }
    //     if(maxSum<sum){
    //         maxSum = sum;
    //         maxIdx = i;
    //     }
    // }
    // cout<<maxSum<<endl;
    // cout<<maxIdx;
    int maxIdx = 0;
    int maxSum = INT_MIN;
    int Sum = 0;
    for(int i=0;i<k;i++){
        Sum += arr[i];
    }
    // SLIDING WINDOW ALGORITHM
    int i = 1 , j = k;
    maxSum = Sum;
    while(j<n){
        Sum = Sum+arr[j] - arr[i-1];
        if(maxSum<Sum){
            maxSum = Sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    //TC = O(n)
    cout<<maxSum<<endl<<maxIdx;
}