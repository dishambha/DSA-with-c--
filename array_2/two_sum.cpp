#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number of elements in the vector: ";
    cin>>n;
    cout<<endl<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    int x;
    cout<<"Enter the number X : ";
    cin>>x;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==x) {
                cout<<"["<<v[i]<<","<<v[j]<<"]";
            }
        }
    }

}