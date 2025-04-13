#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n][n]={};
    int i=0;
    int k=1;
    while(k <= n*n){
        //left to right 

        int j=i;
        while(j<n-i){
            arr[i][j++] = k++;
        }
        //top to bottom
        j = i+1;
        while(j<n-i){
            arr[j++][n-i-1] = k++;
        }
        //right to left
        j = n-i-2;
        while(j>i){
            arr[n-i-1][j--] = k++;
        }
        //bottom to left
        j = n-i-1;
        while(j>i){
            arr[j--][i] = k++;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}