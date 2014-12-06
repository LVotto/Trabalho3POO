#ifndef ARMOR_H_
#define ARMOR_H_

#include "Item.hh"
#include <cmath>
using namespace std;

class Armor : public Item{

protected:
    int defensepts;
    double weight;
    bool equipped;

public:
    Armor(string, double, int, double);

    Armor(const Armor&);

    int getAttackPts();

    int getDefensePts();

    int getWeight();

    bool isEquipped();

    void equip();

    void unequip();

    void use();

};
#endif // ARMOR_H_
