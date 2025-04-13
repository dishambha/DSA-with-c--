#include<iostream>
using namespace std;
int partition(int arr[], int startIdx, int endIdx){
    int pivotElement = arr[(startIdx+endIdx)/2];
    int  count = 0;
    for(int i= startIdx; i<=endIdx;i++){
        if(i==(startIdx+endIdx)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count+startIdx;
    swap(arr[(startIdx+endIdx)/2], arr[pivotIdx]);
    int i = startIdx;
    int j = endIdx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int quickSelect(int arr[], int startIdx, int endIdx, int k){
    int pivitIdx = partition(arr, startIdx, endIdx);
    if(pivitIdx+1==k) return arr[pivitIdx];
    else if(pivitIdx+1<k) quickSelect(arr, pivitIdx+1, endIdx , k);
    else quickSelect(arr, startIdx, pivitIdx-1, k);
}
int main(){
    int arr[]= {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<quickSelect(arr, 0, n-1, k);

}