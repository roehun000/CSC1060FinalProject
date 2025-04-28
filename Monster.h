#ifndef MONSTER_H
#define MONSTER_H

#include <string>
using namespace std;

class Monster {
private:
    string name;
    int level;
    int hp;
    int attack;
    string type; 

public:
    // Constructor
    Monster(string n, int lvl, int health, int atk, string t = "Normal");

    // Getters
    string GetName() const;
    int GetLevel() const;
    int GetHP() const;
    int GetAttack() const;
    string GetType() const;
#ifndef MONSTER_H
#define MONSTER_H

#include <string>
using namespace std;

class Monster {
private:
    string name;
    int level;
    int hp;
    int attack;
    string type; // <-- NEW

public:
    // Constructor with default type "Normal"
    Monster(string n, int lvl, int health, int atk, string t = "Normal");

    // Getters
    string GetName() const;
    int GetLevel() const;
    int GetHP() const;
    int GetAttack() const;
    string GetType() const;

    // Setters
    void SetHP(int newHP);

    // Display info
    void PrintStats() const;
};

#endif

    // Setters
    void SetHP(int newHP);

    // Display info
    void PrintStats() const;
};

#endif
