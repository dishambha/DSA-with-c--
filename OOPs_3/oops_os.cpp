#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;
    int roll_no;

};
int main(){
    student Dishambha; //object
    Dishambha.name = "Dishambha";
    Dishambha.roll_no = 1220432232;
    cout<<Dishambha.name<<"  -  "<<Dishambha.roll_no<<endl;

    student *Ajay = new student();
    Ajay -> name = "Ajay";
    Ajay -> roll_no = 12204342;
    cout<<Ajay->name<<" - "<<Ajay->roll_no<<endl;
}