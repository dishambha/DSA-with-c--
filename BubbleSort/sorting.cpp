#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter the vector: ";
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());  // O(nlogn) time complexity.

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}