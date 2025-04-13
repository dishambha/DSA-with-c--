#include<iostream>
#include<vector>
using namespace std;
void removeOnes(vector <int> ans,vector <int>& original,int idx){
    if(idx==original.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return;
    }
    int a = original[idx];
    if(a==1) removeOnes(ans,original,idx+1);
    else{
        ans.push_back(a);
        removeOnes(ans,original,idx+1);
    }
}
int main(){
    vector<int> v; 
    int n;
    cout<<"Enter the lengths of the array: ";
    cin>>n;
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> d;
    removeOnes(d,v,0);
    return 0;
}