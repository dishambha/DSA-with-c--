#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[],int size){  //int*b ;
    b[0] = 13;
    return;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    //char rr[3] = {'a','v','c'};
    int size = sizeof(arr)/sizeof(arr[0]);
    //accessing the elements of array in another hunction.
    //updation,pass by value /reference ??
    cout<<size<<endl;
   display(arr,size);
   change(arr,size);
   display(arr,size);
}
