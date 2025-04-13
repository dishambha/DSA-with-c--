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
    int max = stoi(v[0]);
    string maxs = v[0];
    int maxidx = 0;
    for(int i=1;i<n;i++){
        int x = stoi(v[i]);
        if(x>max){
            max = x;
            maxs = v[i];
            maxidx = i;
        }
    }
    cout<<max<<endl<<maxs<<endl<<maxidx;

}