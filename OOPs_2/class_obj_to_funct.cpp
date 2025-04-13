#include<iostream>
using namespace std;
class Player{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
//         GETTER
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
//          SETTER
    void setHealth(int health){
        Player::health = health; // player wala health
    }
    void setAge(int age){
        this->age = age; // this class's health = health
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
};
int addScore(Player a, Player b){
    return a.getScore()+ b.getScore();
}
Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore() > b.getScore()) return a;
    else return b;
}
int main(){
    Player Dishambha; // object creaction , statically.
    Player Raghav; // compile time , static allocation
    
    Player* urvi = new Player; // run time, dynamic allocation.

    Dishambha.setHealth(100);
    Dishambha.setAge(19);
    Dishambha.setScore(69);
    Dishambha.setIsAlive(true);

    Raghav.setHealth(80);
    Raghav.setAge(18);
    Raghav.setScore(19);
    Raghav.setIsAlive(true);

    urvi -> setHealth(23);

    cout<<urvi -> getHealth()<<endl;

    // cout<<"Combine score of Dishambha and Raghav is "<<addScore(Dishambha, Raghav)<<endl;
    // Player winner = getMaxScorePlayer(Dishambha, Raghav);
    // if(winner.getScore() == Dishambha.getScore()) cout<<"Winner is Dishambha";
    // else cout<<"Raghav is the Winner";
}