#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    //int max = arr[0];
    int max = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    int sec_max = INT_MIN;
    for(int i=0;i<n;i++){
        if(sec_max<arr[i] && sec_max!=arr[i])
        sec_max = arr[i];
    }
    cout<<sec_max;
}