#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v; 
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    v.at(0)=0;
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}