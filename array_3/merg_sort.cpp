#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    return;
}
vector<int> merg(vector<int>& v1,vector<int>& v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> res(m + n);
    int i=0;//v1
    int j=0;//v2
    int k=0;//res
    while(i<=n-1 && j<=m-1){
        if(v1[i]<v2[j]){
            res[k] = v1[i];
            i++;
        }
        else{// v2[j]<=v1[i]
            res[k] = v2[j];
            j++;
        }
        k++;
    }
    // for remaining elements
    if(i==n){//v1 ke sare elemens
        while(j<=m-1){
            res[k] = v2[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k] = v1[i];
            k++;
            i++;
        }
    }
    return res;
}
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    vector<int> v2;
    int n ,m;
    cout<<"Enter the length of first array: ";
    cin>>n;
    cout<<"Enter the length of second array: ";
    cin>>m;
    cout<<"Enter  the  first array: ";
    input(v1,n);
    cout<<"Enter the second array: ";
    input(v2,m);
    display(v1);
    display(v2);
    vector<int> v = merg(v1,v2);
    display(v);

}