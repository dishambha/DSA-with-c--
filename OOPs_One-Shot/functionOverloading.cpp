#include<iostream>
#include<string>
using namespace std;
class Loading{
public:
    void sum(string a, string b){
        string c = " ";
        cout<<a+c+b<<endl;
    }
    void sum(int a, int b){
        cout<<a+b<<endl;
    }
    void sum(int a , int b, int c){
        cout<<a+b+c<<endl;
    }
};
int main(){
    Loading a;
    a.sum(5,6);
    a.sum(4,6,9);
    a.sum("Dishambha","Awasthi");
}