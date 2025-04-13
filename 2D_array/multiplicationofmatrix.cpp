#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"Enter the  number of rows of first matrix: ";
    cin>>m;
    cout<<"Enter the number of columns of first matrix: ";
    cin>>n;

    cout<<"Enter the  number of rows of second matrix: ";
    cin>>p;
    cout<<"Enter the number of columns of second matrix: ";
    cin>>q;
    if(n!=p) {
        cout<<"Matrix multiplication is not possible";
        return 0;
    }
    int a[m][n];
    cout<<"Enter the elements of first matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[p][q];
    cout<<"Enter the elements of second matrix: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            //res[i][j]= a[i][0]*b[0][j] + a[i][1]*b[1][j] + ...
            for(int k=0;k<p;k++){
                res[i][j] +=a[i][k]*b[k][j];
            }
        }
    }
    //print
    
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}