#ifndef KNIGHT_H_
#define KNIGHT_H_

#include "Character.hh"
using namespace std;

class Knight : public Character{

protected:
    int power;

public:
    Knight(string, int);

    void addPower(int);

    bool special(Team*);

    string specialDesc();

protected:

    int getDefensePts();

};

#endif // KNIGHT_H_
