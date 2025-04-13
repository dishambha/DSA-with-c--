#include<iostream>
#include<vector>
using namespace std;
//dutch flag algorithm 
void sortOnePass(vector<int>& nums){
    int lo = 0;
    int mid =0;
    int hi = nums.size()-1;
    /*
    1) focus on mid
    2) 0 to lo-1 -> 0, hi+1 to end -> 2
    lo to mid-1 -> 1
    */
    while(mid<=hi){
        if(nums[mid]==2){
            int temp = nums[mid];
            nums[mid] = nums[hi];
            nums[hi] = temp;
            hi--;
        }
        else if(nums[mid]==0){
            int temp = nums[mid];
            nums[mid] = nums[lo];
            nums[lo] = temp;
            lo++;
            mid++;
        }
        else mid++;
    }
    return;
}
void sort1(vector<int>& v){
    int n= v.size();
    int noz = 0;
    int noo = 0;
    int nots = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else nots++; 
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i] = 0 ;
        else if(i<noz+noo) v[i] = 1;
        else v[i] = 2;
    }
    return;
}
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sort1(v);
    display(v);
}