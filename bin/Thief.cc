#include "Thief.hh"

Thief::Thief(string alias, int stealth) : Character(alias) {
    this->stealth = stealth;
}

int Thief::getAttackPts(){
    return Character::getAttackPts()+stealth;
}

void Thief::addStealth(int s){
    stealth += s;
    if(stealth>100){stealth = 100;}
}

bool Thief::special(Team* team){
    if(MP < 25){return false;}
    MP -= 25;
    for(int i=0; i<team->getSize(); i++){
        team->getChar(i)->addMP((-1)*dexterity);
        cout << "<!> " << team->getChar(i)->getName() << " perdeu " << dexterity << " MP!\n";
    }
    return true;
}

string Thief::specialDesc(){

    return "2 - Flecha envenenada: Reduz o MP de cada inimigo. (-25MP)\n";

}
