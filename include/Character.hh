#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include "Inventory.hh"
#include "Item.hh"
#include "Team.hh"
using namespace std;

class Item;
class Inventory;
class Team;

class Character{

private:
    string alias;
    Inventory* myitems;

protected:
    int HP;
    int MP;
    int XP;
    int strength;
    int speed;
    int dexterity;
    int constituition;
    int old_speed;

public:

    Character(string alias);

    string getName();

    bool isAlive();

protected:
    virtual int getDefensePts();

    virtual int getAttackPts();

public:

    void addHP(int HP);

    void addMP(int MP);

    void receiveDamage(int damage);

    virtual void attack(Character *target);

    void addXP(int newXP);

    int totalAttributes();

    bool setStrength(int strength);

    bool setSpeed(int speed);

    bool setDexterity(int dexterity);

    bool setConstituition(int constituition);

    Item* searchItem(int);

    void insertItem(Item* item);

    void removeItem(string itemname);

    void setSpaces(int spaces);

    int getSpaces();

    int getHP();

    int getMP();

    int getSpeed();

    virtual ~Character();

    void equipItem(Item* item);

    void refreshSpeed(double);

    void loadSpeed();

    void storeSpeed();

    virtual bool special(Team*) = 0;

    virtual string specialDesc() = 0;

};

#endif // CHARACTER_H_
