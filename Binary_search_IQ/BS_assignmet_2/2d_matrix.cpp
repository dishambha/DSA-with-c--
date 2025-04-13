#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int m = 3; // number of rows
    int n = 4; // number of columns 
    int target = 30;
    int lo = 0; 
    int hi = (m*n)-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid/n][mid%n]==target) {
            flag = true;
            cout<<"True";
            break; 
        }
        else if(arr[mid/n][mid%n] > target ) hi = mid-1;
        else lo = mid+1;
    }
    if(flag == false ) cout<<"False";
}