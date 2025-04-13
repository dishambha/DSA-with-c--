#include<iostream>
using namespace std;
int main(){
    //INDEXES    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
    int arr[] = {0,0,0,0,0,0,0,0,0,1,1 ,1 ,1 ,1 ,1};
    int n = 15;
    //binary search
    int lo=0;
    int hi =n-1;
    int fi=0;
    bool flag = false;

    while(lo<=hi){
        int mid = lo+(hi-lo)/2;

        if(arr[mid]==1){
            if(arr[mid-1]!=1){
                flag=true;
                fi=mid;
                break;
            }
            else{
                hi = mid-1;
            }
        }
        else if(arr[mid]<1){
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }
    int noo = n-fi;
    cout<<noo;
}