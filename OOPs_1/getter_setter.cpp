#include<iostream>
using namespace std;
class Player{
    private:
    int score; //data members
    int health; // data member

    public: 
    // SETTER
    void setScore(int s){
        cout<<"Score is being set."<<endl;
        score = s;
    }
    void setHealth(int h){
        cout<<"Health is being set."<<endl;
        health = h;
    }
    
    //GETTER
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    Player Dishambha;
    Dishambha.setScore(15);
    Dishambha.setHealth(100);
    
    cout<<Dishambha.getScore()<<endl;
    cout<<Dishambha.getHealth()<<endl;
}