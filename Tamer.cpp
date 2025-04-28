#include "Tamer.h"
#include <iostream>
using namespace std;

Tamer::Tamer(string name) {
    tamerName = name;
}

void Tamer::AddMonster(const Monster& m) {
    team.push_back(m);
}

void Tamer::ShowTeam() const {
    cout << tamerName << "'s Team:" << endl;
    for (const Monster& m : team) {
        m.PrintStats();
    }
}

string Tamer::GetName() const {
    return tamerName;
}
