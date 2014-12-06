#ifndef THIEF_H_
#define THIEF_H_

#include "Character.hh"
using namespace std;

class Thief : public Character{

protected:
    int stealth;

public:
    Thief(string, int);

protected:
    int getAttackPts();

public:
    void addStealth(int);

};

#endif // THIEF_H_
