#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;

    Student(){ // Default Constructor

    }
    //Parametrised Constructors
    Student(string s, float g){
        name = s;
        gpa = g;
    }
    //Parametrised Constructors
    Student(string s, int r, float g){
        name = s;
        rno = r;
        gpa = g;
    }
};

void print(Student s){  //pass by value
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<" "<<endl;
}
int main(){
    Student s1("Dishambha Awasthi",27,8.54);
    
    Student s2;
    s2.name = "Priyanshu Jaiswal";
    s2.rno = 39;
    s2.gpa = 8.5;

    Student s3("Archit Saxena", 8.15);
    s3.rno = 18;

    Student s4 = s1;  //Deep Copy

    Student s5(s2);  //Copy Constructor  - Deep Copy

    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
}