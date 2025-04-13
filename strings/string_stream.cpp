#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str = "I am dishambha awasthi";
    stringstream ss(str);
    string temp;
    int count=0;
    while(ss>>temp){
        cout<<temp<<endl;
        count++;
    }
    cout<<count;
}