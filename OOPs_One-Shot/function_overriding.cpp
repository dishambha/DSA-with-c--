#include<iostream>
using namespace std;
class Scooty{ // Parent Class
public:
    int topspeed;
    float mileage;
    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
private:
    int bootSpace;
};
class Bike :public Scooty{ // Child class
public:
    int gears;
    void sound(){
        cout<<"Droom Droom"<<endl;
    }
};
int main(){
    Bike* b = new Bike();
    b->sound();
    Scooty* s = new Scooty();
    s->sound();

    Scooty* g = new Bike();
    g->sound();
}