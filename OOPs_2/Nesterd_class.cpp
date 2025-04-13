#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    class Helmet{
    private:
        int hp;
        int level;
    public:
    //SETTER
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        //GETTER
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

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
    Gun getGun(){
        return gun;
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
    void setGun(Gun gun){
        this -> gun = gun;
    }

    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet -> setLevel(level);
        int health = 0;

        if (level == 1) health = 25;
        else if(level == 2) health = 50;
        else if(level == 3) health = 100;
        else cout<<"Error, Invalid Level!!";

        helmet -> setHp(health);
        this->helmet = *helmet;
    }

    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }
};
int main(){
    Player Dishambha; // object creaction , statically.
    Player Raghav; // compile time , static allocation
    
    Player* urvi = new Player; // run time, dynamic allocation.

    Gun akm;
    akm.ammo = 40;
    akm.damage = 80;
    akm.scope = 2;

    Gun awm;
    awm.ammo = 5;
    awm.damage = 120;
    awm.scope = 8;

    Dishambha.setHealth(100);
    Dishambha.setAge(19);
    Dishambha.setScore(69);
    Dishambha.setIsAlive(true);
    Dishambha.setGun(akm);
    Dishambha.setHelmet(3);

    Raghav.setHealth(80);
    Raghav.setAge(18);
    Raghav.setScore(19);
    Raghav.setIsAlive(true);
    Raghav.setGun(awm);
    Raghav.setHelmet(2);

    // Gun gun123 = Dishambha.getGun();
    // cout<<gun123.damage<<endl;
    // cout<<gun123.ammo<<endl;
    // cout<<gun123.scope<<endl;
    // cout<<endl;
    // Raghav.getHelmet();
    // cout<<endl;
    // Dishambha.getHelmet();

    //ARRAY OF OBJECTS
    Player players[3] = {Dishambha, Raghav, *urvi};
    cout<<players[0].getAge();    
}