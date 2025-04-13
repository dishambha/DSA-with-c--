#include<iostream>
using namespace std;
int main(){
    //index       0 1 2 3 4  5  6  7  8
    int arr[9] = {1,2,4,5,9,15,18,21,25};
    int n = 9; //length of the array
    int x = 17; //target element

    int lo = 0; // first index
    int hi = n-1; //last index
    bool flag = false; // target in not in the array
    while(lo<=hi){
        int mid = lo+(hi-lo)/2; //middle element
        //condition 1st if middle element is equal to x.
        if(arr[mid] == x){
            flag = true;
            cout<<"Lower bound = "<<arr[mid-1]<<" Upper bound = "<<arr[mid+1];
            break;
        }
        //condition 2nd if middle element is less than x.
        else if(arr[mid] < x){
            lo = mid+1;
        }
        //condition 3rd if middle element is greater than x.
        else{
            hi = mid-1;
        }
    }
    if(flag == false){ //target element was not found in the given array
        cout<<"Lower bound = "<<arr[hi]<<endl<<"Upper bound = "<<arr[lo];
    }
}