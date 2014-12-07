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

bool Knight::special(Team* team){
    if(MP < 25){
        return false;
    }
    MP -= 25;
    for(int i=0; i<team->getSize(); i++){
        attack(team->getChar(i));
    }
    return true;
}

string Knight::specialDesc(){

    return "2 - Furia: Ataca cada inimigo uma vez. (-25MP)\n";

}
