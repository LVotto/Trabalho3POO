/***************************************
*
*   Luiz Felipe Machado Votto
*   8504006
*   Trabalho 2 do Moacir
*   Entrega: 27/10/2014
*
****************************************/

//#include <iostream>
#include "Item.hh"
#include "Inventory.hh"
#include "Character.hh"
#include "Potion.hh"
#include "HealthPotion.hh"
#include "ManaPotion.hh"
#include "Weapon.hh"
#include "Armor.hh"
#include "Knight.hh"
#include "Wizard.hh"
#include "Thief.hh"
#include "Team.hh"

using namespace std;

/* Funcao que facilita minha vida para definir as personagens */
/* Pq, afinal, nao ta facil... */
void charSetters(Character* c, int st, int sp, int de, int co){
    c->setStrength(st);
    c->setSpeed(sp);
    c->setDexterity(de);
    c->setConstituition(co);
}

/* Funcao que facilita minha vida para montar as equipes */
void teamAssembly(Team* t, Character* c1, Character* c2, Character* c3, Character* c4){
    t->addChar(c1);
    t->addChar(c2);
    t->addChar(c3);
    t->addChar(c4);

}

int main2(){



    return 0;
}
