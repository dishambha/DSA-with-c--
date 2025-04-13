#include<iostream>
using namespace std;

class Bike{
public:
    static int noOfBikes; //this belongs to the class
    int tyreSize;
    int engineSize;

    Bike(int a, int b){
        this-> tyreSize = a;
        this-> engineSize = b;
    }
};
int Bike::noOfBikes = 10;
int main(){
    Bike RoyalEnfield(15, 350);
    Bike bajaj(13, 150);

    cout<<RoyalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl;

} 