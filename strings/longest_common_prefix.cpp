#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    vector<string> v;
    cout<<"Enter the length of the vector: ";
    int n;
    cin>>n;
    cout<<"Enter the values in string: ";
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    
}