#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of column: ";
    cin>>n;
    int arr1[m][n];
    cout<<"Enter the matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j] = arr1[j][i]; //transpose
        }
    }
    //print transpose
    cout<<"Transpose matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //column wiserotation
    cout<<"Anti clockwise rotated matrix: "<<endl;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}