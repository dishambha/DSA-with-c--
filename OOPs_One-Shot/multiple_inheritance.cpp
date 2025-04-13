#include<iostream>
using namespace std;
class Cricketer{
public:
    int matches;
    int runs;
    int wickets;
};
class Engineer{
public:
    int experience;
    string domain;
    string company;
};
class Phodu : public Engineer, public Cricketer{
public:
    string name;
};
void Print(Phodu p){
    cout<<p.name<<" "<<p.matches<<" "<<p.runs<<" "<<p.wickets<<" "<<p.experience<<" "<<p.domain<<" "<<endl;
}
int main(){
    Phodu p1;
    p1.name = "Saurabh Natrawalker";
    p1.matches = 50;
    p1.runs = 150;
    p1.wickets = 60;
    p1.experience = 9;
    p1.domain = "Data Base Engineer";
    p1.company = "Oracal";
    Print(p1);
}