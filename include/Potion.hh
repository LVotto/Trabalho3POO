#ifndef POTION_H_
#define POTION_H_

#include "Item.hh"
using namespace std;

class Potion : public Item{

private:
    int restorepts;

public:
    Potion();

    Potion(string name, double price, int restorepts);

    Potion(const Potion& p);

    bool isPotion();

    int getRestorePts();

    virtual void use() = 0;

    int getDefensePts();

    int getAttackPts();

    void equip(){}

};
#endif // POTION_H_
