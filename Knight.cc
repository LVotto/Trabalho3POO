#include "Knight.hh"

Knight::Knight(string alias, int power) : Character(alias){
    this->power = power;
}

void Knight::addPower(int p){
    power += p;
    if(power>100){power = 100;}
}

int Knight::getDefensePts(){
    return Character::getDefensePts() + power;
}
