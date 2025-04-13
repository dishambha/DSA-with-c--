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
    cout<<"Enter the element whose occurrence is to be checked: ";
    cin>>x;
    cout<<endl;
    int idx = -1;
    for(int i=n-1;i>=0;i--){
        if (v[i]==x){ idx = i;
        break;
        }
    }
    cout<<"The last occurrence of "<<x<<" is at index "<<idx;
}
