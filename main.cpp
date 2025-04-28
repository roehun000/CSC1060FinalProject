#include <iostream>
#include "Monster.h"
#include "Tamer.h"
using namespace std;

int main() {
    cout << "Welcome to Hunter Roe's Monster Tamer Game for CSC-1060 C++ Class for Dr. Rhodes" << endl;

    // Create a Tamer
    Tamer tamer1("Hunter");

    // Create some Monsters
    Monster sparky("Sparky", 5, 35, 55, "Electric");
    Monster ember("Ember", 5, 39, 52, "Fire");

    // Add Monsters to Tamer's team
    tamer1.AddMonster(sparky);
    tamer1.AddMonster(ember);

    // Show team
    tamer1.ShowTeam();

    return 0;
}
