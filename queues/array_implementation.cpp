#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int front;
    int back;
    vector<int> arr;;
    Queue(int val){
        front = 0;
        back = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val){
        if(back==arr.size()){
            cout<<"Queue is Full!"<<endl;
            return;
        }
        arr[back] = val;
        back++;
    }
    void pop(){
        if((front-back)==0){
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        front++;
    }
    int getfront(){
        if((front-back)==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[front];
    }
    int getback(){
        if(front-back==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[back-1];
    }
    int size(){
        return back-front;
    }
    bool empty(){
        if(front-back==0) return true;
        else return false;
    }
    void display(){
        for(int i=front;i<back;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(100);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.display();
    q.pop();
    q.display();
}