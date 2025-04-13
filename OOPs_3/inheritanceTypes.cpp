#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent class"<<endl;
    }
};

class Parent2{
    public:
    Parent2(){
        cout<<"Parent 2 class"<<endl;
    }
};
class Child: public Parent,public Parent2{
    public:
    Child(){
        cout<<"Child Class"<<endl;
    }
};

class GrandChild: public Child{
    public:
    GrandChild(){
        cout<<"Grandchild class"<<endl;
    }
};

int main(){

    Child c;
    GrandChild gc;
}
