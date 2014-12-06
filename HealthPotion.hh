#ifndef HEALTHPOTION_H_
#define HEALTHPOTION_H_

#include "Potion.hh"

class HealthPotion : public Potion{

public:
    HealthPotion(string name, double price, int restorepts);

    void use();

};
#endif // POTION_H_
