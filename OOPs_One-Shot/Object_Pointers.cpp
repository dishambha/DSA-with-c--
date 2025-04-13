#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    
};
void change(Cricketer* c1){
    // (*c1).avg = 54.5;
    c1->avg = 58.4;
}


int main(){
    Cricketer c1("Virat Kohli", 25000,55.2);
    Cricketer c2("Rohit Sharma",18000,47.1);
    // cout<<c1.avg<<endl;
    // change(&c1);
    // cout<<c1.avg<<endl;

    Cricketer* p1 = &c1;
    cout<<p1->runs<<endl;
    p1->avg = 58.4;
    cout<<c1.avg<<endl;
}