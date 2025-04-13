#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n,int idx){
    if (idx==n) return;
    cout<<arr[idx]<<" ";
    print(arr,n,idx+1);
}
void display_vector(vector<int>& v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display_vector(v,idx+1);
}
int main(){
    
    int arr[] = {5,3,4,2,5,6,5,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i] = arr[i];
    }
    display_vector(v,0);
    cout<<endl;
    print(arr,n,0);
}