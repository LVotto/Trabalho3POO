#ifndef ITEM_H_
#define ITEM_H_

#include <string>
#include "Character.hh"
using namespace std;

class Character;

class Item{

protected:
    string name;
    double price;
    Character *owner;

public:
    Item();

    Item(string name, double price);

    Item(Item* item);

    string getName();

    virtual bool isPotion() = 0;

    double getPrice();

    void setOwner(Character*);

    Character* getOwner();

    virtual void use() = 0;

    virtual int getDefensePts() = 0;

    virtual int getAttackPts() = 0;

    virtual bool isEquipped();

    virtual void equip() = 0;

    virtual ~Item();

};

#endif // ITEM_H_
