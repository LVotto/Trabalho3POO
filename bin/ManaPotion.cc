#include "ManaPotion.hh"
#include "Character.hh"

ManaPotion::ManaPotion(string name, double price, int restorepts) : Potion(name, price, restorepts){}

void ManaPotion::use(){

    owner->addMP(getRestorePts());
    cout << "<!> Recuperou " << getRestorePts() << "MP.\n";
    owner->removeItem(getName());
    delete this;

}


