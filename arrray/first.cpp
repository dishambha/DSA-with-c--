/*
Given an array of marks of students, 
if the marks of any student is less than 35
print its roll number.[roll number here refers
to the index of the array.] 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of studemts: ";
    cin>>n;
    //initialization
    int marks[n];
    // input
    cout<<"Enter the marks of the students: ";
    for(int i=1;i<=n;i++){
        cin>>marks[i];
    }
    // output
    for(int i=1;i<=n;i++){
        if (marks[i]<35)
        cout<<i<<endl;
    }
    return 0;
}