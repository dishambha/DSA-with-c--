#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> v1;
    cout<<"Enter the length of the vector : ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int>v(n,0);
    int x = 0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
           if(v[j]==1) continue;
           else{
                if(min>v1[j]){
                    min = v1[j];
                    mindx = j;
                }
           } 
        }
    v1[mindx] = x;
    v[mindx] = 1; // visited
    x++;
    }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}