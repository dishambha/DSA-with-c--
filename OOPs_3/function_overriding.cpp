#include<iostream>
using namespace std;

class parent{
public:
    virtual void print(){
        cout<<"Parent Class"<<endl;
    }
    void show(){
        cout<<"Parent Class"<<endl;
    }
};

class Child: public parent{
    public:
    void print(){
        cout<<"Child Class"<<endl;
    }
    void show(){
        cout<<"Child Class"<<endl;
    }
};

int main(){
    parent *p;
    Child c;

    p = &c;
    p -> print();
    p -> show();
}