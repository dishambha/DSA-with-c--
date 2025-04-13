#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent class"<<endl;
    }
};
class Child1: public Parent{
    public:
    Child1(){
        cout<<"Child1 Class"<<endl;
    }
};
class child2: public Parent{
    public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};
class GrandChild: public Child1, public child2{
    public:
    GrandChild(){
        cout<<"Grandchild class"<<endl;
    }
};

int main(){

    GrandChild gc;
}
