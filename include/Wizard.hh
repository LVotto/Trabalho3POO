#ifndef WIZARD_H_
#define WIZARD_H_

#include "Character.hh"
using namespace std;

class Wizard : public Character{

protected:
    int wisdom;

public:
    Wizard(string, int);

protected:
    int getDefensePts();

public:
    void addWisdom(int);

    bool special(Team*);

    string specialDesc();

};

#endif // WIZARD_H_
