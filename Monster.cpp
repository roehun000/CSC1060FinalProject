#include "Monster.h"
#include <iostream>
using namespace std;

Monster::Monster(string n, int lvl, int health, int atk) {
    name = n;
    level = lvl;
    hp = health;
    attack = atk;
}

string Monster::GetName() const {
    return name;
}

int Monster::GetLevel() const {
    return level;
}

int Monster::GetHP() const {
    return hp;
}

int Monster::GetAttack() const {
    return attack;
}

void Monster::SetHP(int newHP) {
    hp = newHP;
}

void Monster::PrintStats() const {
    cout << name << " - Level: " << level << " - HP: " << hp << " - Attack: " << attack << endl;
}
