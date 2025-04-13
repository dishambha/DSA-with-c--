#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;
};

int main(){
    Student s1;
    s1.name = "Dishambha Awasthi";
    // s1.rno = 27;
    s1.gpa = 8.54;
    cout<<"Enter the Roll Number: ";
    cin>>s1.rno;

    Student s2;
    s2.name = "Priyanshu Jaiswal";
    s2.rno = 39;
    s2.gpa = 8.5;

    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<" "<<endl;
}