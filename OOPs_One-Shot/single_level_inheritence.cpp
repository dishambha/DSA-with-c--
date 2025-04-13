#include<iostream>
using namespace std;
class Scooty{ // Parent Class
public:
    int topspeed;
    float mileage;
private:
    int bootSpace;
};
class Bike :public Scooty{ // Child class
public:
    int gears;
};
int main(){
    Bike b1;
    b1.topspeed = 200;
    b1.mileage = 12.5;
    b1. gears = 6;
}