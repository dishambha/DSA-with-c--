#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows and column of a square matrix :";
    cin>>m;
    int arr1[m][m];
    cout<<"Enter the square matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            if(i==j) cout<<arr1[i][j]<<" ";
            else if(i+j==m-1) cout<<arr1[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }

}