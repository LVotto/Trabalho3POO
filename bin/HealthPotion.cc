#include "HealthPotion.hh"
#include "Character.hh"

HealthPotion::HealthPotion(string name, double price, int restorepts) : Potion(name, price, restorepts){}

void HealthPotion::use(){

    owner->addHP(getRestorePts());
    cout << "<!> Recuperou " << getRestorePts() << "HP\n";
    owner->removeItem(getName());
    //delete this;

}

