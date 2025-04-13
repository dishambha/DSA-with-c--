#include<iostream>
using namespace std;
int partition(int arr[], int si, int ei){
    int pivotElement = arr[((si+ei)/2)];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[(si+ei)/2], arr[pivotIdx]);
    int i = si;
    int j = ei;
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
void quickSort(int arr[], int si, int ei){
    if(si>=ei) return;
    //5,1,8,2,7,6,3,4
    int pivotIdx = partition(arr,si,ei);
    //4 1 3 2 5 6 8 7 
    quickSort(arr,si,pivotIdx-1);
    quickSort(arr, pivotIdx+1,ei);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}