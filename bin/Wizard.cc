#include "Wizard.hh"

Wizard::Wizard(string alias, int wisdom) : Character(alias){
    this->wisdom = wisdom;
}

int Wizard::getDefensePts(){
    return (int)Character::getDefensePts()+(wisdom/2);
}

void Wizard::addWisdom(int w){
    wisdom += w;
    if(wisdom>100){wisdom = 100;}
}

bool Wizard::special(Team* team){
    if(MP < 100){return false;}
    MP -= 100-wisdom;
    int i=0;
    while(!team->getChar(i)->isAlive()){i++;}
    team->getChar(i)->receiveDamage(100);
    return true;
}

string Wizard::specialDesc(){

    return "2 - Necromancia: Retira a alma de um oponente. (aprox. -100MP)\n";

}
