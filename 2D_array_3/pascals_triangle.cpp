#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter the value of n: ";
    cin>>m;
    //initialise 2d array
    vector< vector<int> >v;
    for(int i=0;i<m;i++){
        vector<int> a(i+1);
        v.push_back(a);
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) {
                v[i][j]=1;
            }
            else {
                v[i][j] = v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    vector<int> last;
    for(int i=0;i<m;i++){
        last.push_back(v[m-1][i]);
    }
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<last[i];
    }

}