#ifndef TAMER_H
#define TAMER_H

#include "Monster.h"
#include <vector>
#include <string>
using namespace std;

class Tamer {
private:
    string tamerName;
    vector<Monster> team; // Team of Monsters

public:
    Tamer(string name);

    void AddMonster(const Monster& m);
    void ShowTeam() const;
    string GetName() const;
};

#endif
