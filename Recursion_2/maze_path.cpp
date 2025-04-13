#include<iostream>
using namespace std;
int path(int sr,int sc, int er , int ec){
    if(sr>er or sc>ec) return 0;
    if(sr==er and sc==ec) return 1;
    int rightWays = path(sr,sc+1,er,ec);
    int downWays = path(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
int path2(int er , int ec){
    if(er == 0 or ec==0) return 0;
    if(er == 1 and ec== 1) return 1;
    int right = path2(er,ec-1);
    int down = path2(er-1,ec);
    return right+down;

}
void printpath(int sr,int sc, int er , int ec, string s){
    if(sr>er or sc>ec) return ;
    if(sr==er and sc==ec){
        cout<<s<<endl; //destination reached 
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R'); //right
    printpath(sr+1,sc,er,ec,s+'D'); //down
    return;
}
void printpath2(int row, int col, string s){
    if(row<1 or col<1) return ;
    if(row==1 and col==1){
        cout<<s<<endl; //destination reached 
        return;
    }
    printpath2(row,col-1,s+'R'); //right
    printpath2(row-1,col,s+'D'); //down
    return;
}
int main(){
    // cout<<path(1,1,5,5);
    // printpath(1,1,4,4,"");
    cout<<path2(3,3)<<" "<<"Ways"<<endl;
    printpath2(3,3,"");
    
}