#include <bits/stdc++.h>
using namespace std;

// Gun class
class Gun {
public:
    int ammo;
    int damage;
    int scope;

    void show() {
        cout << "Gun -> Ammo: " << ammo
             << ", Damage: " << damage
             << ", Scope: " << scope << endl;
    }
};

// Player class
class player {
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;   // composition

public:
    // Getters
    int gethealth() 
        { return health; }
    int getage() 
        { return age; }
    int getscore() 
        { return score; }
    bool getalive() 
        { return alive; }
    Gun getGun() 
        { return gun; }

    // Setters
    void sethealth(int h) 
        { health = h; }
    void setage(int a) 
        { age = a; }
    void setscore(int s)
         { score = s; }
    void setalive(bool a)
         { alive = a; }
    void setGun(Gun g)
         { gun = g; }
};


// Main function
int main() {
    player shuvo, maruf;

    shuvo.setage(20);
    shuvo.sethealth(189);
    shuvo.setscore(500);
    shuvo.setalive(true);

    maruf.setage(25);
    maruf.sethealth(150);
    maruf.setscore(600);
    maruf.setalive(true);

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;
    akm.show();

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;
    awm.show();

    return 0;
}
