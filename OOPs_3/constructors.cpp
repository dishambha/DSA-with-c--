#include<iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;

    Rectangle(){ // default constuctor //--> no arguments passes

        l = 0;
        b = 0;
    }

    Rectangle(int x , int y){ //parametrised constructor - args passed
        l = x;
        b = y;
    }

    Rectangle(Rectangle& r){ // copy constructor - initialise an obj by another existing obj
        l = r.l;
        b = r.b;
    }

    ~Rectangle(){ // destructor
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    Rectangle* r1 = new Rectangle();
    cout<<"length = "<<r1->l<<" Breadth = "<<r1->b<<endl;
    delete r1;

    Rectangle R2(3, 5);
    cout<<"length = "<<R2.l<<" Breadth = "<<R2.b<<endl;
     
    Rectangle r3 = R2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}