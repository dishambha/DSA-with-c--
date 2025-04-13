#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    Student(){

    }
    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
    float getmarks(){
        return marks;
    }
    void setmarks(float marks){
        this->marks = marks;
    }
private:
    float marks;
};
int main(){
    Student s1("Dishambha Awasthi", 27, 8.54);
    cout<<s1.getmarks()<<endl;
    s1.setmarks(9.4);
}