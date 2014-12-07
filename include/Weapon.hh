#ifndef WEAPON_H_
#define WEAPON_H_

#include "Item.hh"
using namespace std;

class Weapon : public Item{

protected:
    int attackpts;
    double range;
    bool equipped;

public:
    Weapon(string, double, int, double);

    Weapon(const Weapon&);

    bool isPotion();

    int getDefensePts();

    double getRange();

    int getAttackPts();

    void use();

    bool isEquipped();

    void equip();

    void unequip();

};

#endif // WEAPON_H_
