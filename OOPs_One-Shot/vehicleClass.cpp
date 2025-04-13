#include<iostream>
using namespace std;
//Single Level Inheritance
class Vehicle{ // Parent Class
public:
    int topspeed;
    float mileage;
    string fuel;
};
class Car :public Vehicle{ // Child class
public:
    bool sunroof;
};
class Bike :public Vehicle{ // Child class
public:
    int gears;
};
class Truck :public Vehicle{ // Child class
public:
    int length;
};
int main(){
    Bike b1;
    b1.topspeed = 200;
    b1.mileage = 12.5;
    b1. gears = 6;
}