#include<iostream>
#include<vector>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}
void sort1(vector<int>& v){
    int n = v.size();
    int noo = 0;
    int noz = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    // filling elements
    for(int i=0;i<n;i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1; 
    }
}
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort2(vector<int>& v){
    int n = v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0) 
        swap(&v[i],&v[j]);
           i++;
           j--;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // sort1(v);
    // display(v);
    sort2(v);
    display(v);
}