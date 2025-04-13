#include<iostream>
using namespace std;
//Single Level Inheritance
class Vehicle{ // Parent Class
public:
    int topspeed;
    float mileage;
    string fuel;
};
class TwoWheeler :public Vehicle{ // Child class
public:
    bool sunroof;
};
class FourWheeler :public Vehicle{ // Child class
public:
    bool sunroof;
};
class Scooty :public TwoWheeler{ // Child class
public:
    int gears;
};
class Bike :public TwoWheeler{ // Child class
public:
    int length;
};
int main(){
    Bike b1;
    b1.topspeed = 200;
    b1.mileage = 12.5;
    b1. gears = 6;
}