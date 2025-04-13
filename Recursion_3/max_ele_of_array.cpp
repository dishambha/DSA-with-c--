#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[], int n, int idx, int max){
    if(idx==n){   //base case
        cout<<max;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int max_ele(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],max_ele(arr,n,idx+1));
}
int main(){
    
    int arr[] = {5,3,4,2,5,6,5,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<max_ele(arr,n,0);
    // printMax(arr,n,0,INT_MIN);

}