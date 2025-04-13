#include<iostream>
using namespace std;
int main(){
    //index       0  1  2 3 4 5  6
    int nums[] = {28,33,1,3,4,8,20};
    int target = 4;
    int n = 7;
    int lo = 0;
    int hi = n-1;
    int pivot = -1;
    //finding pivot
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
            pivot = mid;
            break;
        }
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            pivot = mid +1;
            break;
        }
        else if(nums[mid]>nums[hi]) lo = mid + 1;
        //if(nums[mid]<nums[hi])
        else hi = mid - 1;
    }
    int tarind = -1;
    if(target>=nums[0] && target<=nums[pivot-1]){
        //binary search
        lo = 0;
        hi = pivot-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target) tarind = mid;
            else if(nums[mid]>target) hi = mid - 1;
            else lo = mid + 1;
        }
    }
    else {
        //binary search
        lo = 0;
        hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target) tarind = mid;
            else if(nums[mid]>target) hi = mid - 1;
            else lo = mid + 1;
        }
    }
    cout<<tarind;
}