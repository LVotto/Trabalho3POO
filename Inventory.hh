#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <string>
#include <vector>
#include <iostream>
#include "Item.hh"
#include "Character.hh"
using namespace std;

class Item;
class Character;

class Inventory{

private:
    int spaces;
    double gold;
    vector<Item*> items;

public:
    Inventory();

    double getTotalGold();

    int getAvailableSpace();

    void spendGold(double debt);

    void earnGold(double gold);

    void setSpaces(int newspace);

    Item* searchItem(string itemname);

    int searchItemIndex(string itemname);

    Item* searchItem(int id);

    void insertItem(Item *item, Character* owner);

    void removeItem(string itemname);

    void removeItem(int id);

    int getTotalDefensePts();

    int getTotalAttackPts();

    void equipItem(Item*);

    ~Inventory();

};
#endif // INVENTORY_H_
