#include<iostream>
using namespace std;
class Calculator{
    public:
    int a; //data members
    int b; //data members

    // MEMBER FUNCTIONS
    void add(){ 
        cout<<a+b<<endl;
    }

    void substract(){
        cout<<a-b<<endl;
    }

    void Multibly(){
        cout<<a*b<<endl;
    }

    void Divide(){
        cout<<a/b<<endl;
    }
};
int main(){
    Calculator calci;
    calci.a = 40;
    calci.b = 20;
    calci.add();
    calci.substract();
    calci.Multibly();
    calci.Divide();
}