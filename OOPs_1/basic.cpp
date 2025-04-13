#include<iostream>
using namespace std;
class Player{
    public:
    int score; //data members
    int health; // data member
    //member functions
    void showHealth(){ 
        cout<<"Health is : "<<health<<endl;
    }

    void showScore(){
        cout<<"Score is : "<<score<<endl;
    }
};
int main(){
    Player Dishambha;
    Dishambha.score = 90;
    Dishambha.health = 100;
    cout<<Dishambha.score<<endl;
    cout<<Dishambha.health<<endl;

    Player Amit;
    Amit.score = 29;
    Amit.health = 89;
    cout<<Amit.score<<endl;
    cout<<Amit.health<<endl; 

    Player Shreya;
    Shreya.score = 67;
    Shreya.health = 100;
    cout<<Shreya.score<<endl;
    cout<<Shreya.health<<endl; 

    //Creating an array of data type Player and adding values to its 0th, 1st and 2nd index.
    Player player[10];
    player[0] = Dishambha;
    player[1] = Amit;
    player[2] = Shreya;

    Dishambha.showHealth();
    Dishambha.showScore();
    
}