#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    int lo = 0;
    int hi = n-1;
    int x;
    cin>>x;
    bool flag = false;
    while (lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<"Yes";
            break;
        }
        else if(arr[mid]<x){
            hi = mid-1;
        }
        else{
            lo = mid+ 1;
        }
    }
    if(flag == false) cout<<"No";   
}