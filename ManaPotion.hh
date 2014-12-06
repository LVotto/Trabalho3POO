#ifndef MANAPOTION_H_
#define MANAPOTION_H_

#include "Potion.hh"

class ManaPotion : public Potion{

public:
    ManaPotion(string name, double price, int restorepts);

    void use();

};
#endif // POTION_H_
