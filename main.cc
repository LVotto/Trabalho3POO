/***************************************
*
*   Luiz Felipe Machado Votto
*   8504006
*   Trabalho 2 do Moacir
*   Entrega: 27/10/2014
*
****************************************/

#include <iostream>
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

int main(){


    /* Weapons */
    Weapon* sword = new Weapon   ("Sword",
                                10.0,
                                10,
                                1);
    Weapon* dagger = new Weapon  ("Dagger",
                                10.0,
                                8,
                                1);
    Weapon* staff = new Weapon   ("Staff",
                                 10.0,
                                 5,
                                 1);
    Weapon* club = new Weapon    ("Club",
                                 10.0,
                                 12,
                                 1);
    Weapon* axe = new Weapon      ("Axe",
                                 10.0,
                                 15,
                                 1);
    Weapon* lance = new Weapon   ("Lance",
                                 10.0,
                                 9,
                                 2);
    Weapon* polearm = new Weapon  ("Polearm",
                                 10.0,
                                 11,
                                 2);

    Weapon* grimoire = new Weapon ("Grimoire",
                                 10.0,
                                 7,
                                 10);
    Weapon* bow = new Weapon     ("Bow",
                                 10.0,
                                 8,
                                 10);

    /* Armors */
    Armor* woodarm = new Armor   ("Wooden Armor",
                                 10.0,
                                 5,
                                 4);
    Armor* stonearm = new Armor  ("Stone Armor",
                                 10.0,
                                 10,
                                 8);
    Armor* leatherarm = new Armor("Leather Armor",
                                 10.0,
                                 2,
                                 1);
    Armor* steelarm = new Armor  ("Steel Armor",
                                 10.0,
                                 12,
                                 8);
    Armor* brassarm = new Armor  ("Brass Armor",
                                 10.0,
                                 11,
                                 8);
    Armor* silverarm = new Armor ("Silver Armor",
                                 20.0,
                                 13,
                                 7);

    /* Health Potions */
    HealthPotion* hp1 = new HealthPotion("Crappy Health Potion",
                                        1.0,
                                        2);
    HealthPotion* hp2 = new HealthPotion("Insufficient Health Potion",
                                        6.0,
                                        10);
    HealthPotion* hp3 = new HealthPotion("Satisfactory Health Potion",
                                        20.0,
                                        25);
    HealthPotion* hp4 = new HealthPotion("Nice Health Potion",
                                        50.0,
                                        50);
    HealthPotion* hp5 = new HealthPotion("Dat Health Potion",
                                        100.0,
                                        80);

    /* Mana Potions */
    ManaPotion* mp1 = new ManaPotion("Crappy Mana Potion",
                                        1.0,
                                        2);
    ManaPotion* mp2 = new ManaPotion("Insufficient Mana Potion",
                                        6.0,
                                        10);
    ManaPotion* mp3 = new ManaPotion("Satisfactory Mana Potion",
                                        20.0,
                                        25);
    ManaPotion* mp4 = new ManaPotion("Nice Mana Potion",
                                        50.0,
                                        50);
    ManaPotion* mp5 = new ManaPotion("Dat Mana Potion",
                                        100.0,
                                        80);

    bool stay = true;
    //while(stay){
        cout << "|||||||||||||| BATALHAS ORIENTADAS A OBJETO ||||||||||||||||\n";
        cout << "       Bem-vindo a 'Batalhas Orientadas a Objeto',\n               o jogo mais esperado do ano!\n              (Pelo menos por mim, se'rio...)\n";
        cout << "       Neste jogo, voce podera' construir duas equipes.\n     Essas equipes lutarao de acordo com a sua vontade.\n";
        cout << "              A diversao e' ilimitada!!!\n";
        cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "\n< 1 > Equipe vermelha:\n";
        for(int i = 1; i<=3; i++){
            string name;
            int choice = 0;
            cout << "\nEscolha o nome da " << i << "a personagem:\n";
            cin >> name;
            while(choice < 1 || choice > 3){
                cout << "Escolha a classe dessa personagem:\n";
                cout << "1 - Knight;\n2 - Thief\n3 - Wizard\n";
                cin >> choice;
                if(choice < 1 || choice > 3){
                    cout << "Escolha a classe digitando um numero de 1 a 3, por favor!!\n";
                }
            }



        }

        /* Characters */
        Knight* k1 = new Knight ("Polegar",       5);
        Knight* k2 = new Knight ("Punho",         5);
        Thief*  t1 = new Thief  ("Sombra",        5);
        Thief*  t2 = new Thief  ("Sorrateiro",    5);
        Wizard* w1 = new Wizard ("Barbudo",       5);
        Wizard* w2 = new Wizard ("Sobrancelhudo", 5);
        Thief*  t3 = new Thief  ("Saqueador",     5);
        Thief*  t4 = new Thief  ("Sortudo",       5);

        charSetters(k1, 25, 25, 25, 25);
        charSetters(k2, 25, 25, 25, 25);
        charSetters(t1, 25, 25, 25, 25);
        charSetters(t2, 25, 25, 25, 25);
        charSetters(w1, 25, 25, 25, 25);
        charSetters(w2, 25, 25, 25, 25);
        charSetters(t3, 25, 25, 25, 25);
        charSetters(t4, 25, 25, 25, 25);

        /* Teams */
        Team* team1 = new Team("Team 1", red);
        Team* team2 = new Team("Team 2", blue);

        teamAssembly(team1, k1, t1, w1, t2);
        teamAssembly(team2, k2, t2, w2, t4);

        /* Distribuindo items */
        k1->setSpaces(5);

        k1->insertItem(sword);
        k1->equipItem(sword);
        k1->insertItem(stonearm);
        k1->equipItem(stonearm);
        k1->insertItem(hp3);
        k1->insertItem(mp3);
        k1->insertItem(hp4);

        k2->setSpaces(5);

        k2->insertItem(club);
        k2->equipItem(club);
        k2->insertItem(stonearm);
        k2->equipItem(stonearm);
        k2->insertItem(hp3);
        k2->insertItem(mp3);
        k2->insertItem(hp4);

        t1->setSpaces(5);

        t1->insertItem(dagger);
        t1->equipItem(dagger);
        t1->insertItem(leatherarm);
        t1->equipItem(leatherarm);
        t1->insertItem(hp3);
        t1->insertItem(mp3);
        t1->insertItem(hp4);

        t2->setSpaces(5);

        t2->insertItem(bow);
        t2->equipItem(bow);
        t2->insertItem(leatherarm);
        t2->equipItem(leatherarm);
        t2->insertItem(hp3);
        t2->insertItem(mp3);
        t2->insertItem(hp4);

        t3->setSpaces(5);

        t3->insertItem(dagger);
        t3->equipItem(dagger);
        t3->insertItem(leatherarm);
        t3->equipItem(leatherarm);
        t3->insertItem(hp3);
        t3->insertItem(mp3);
        t3->insertItem(hp4);

        t4->setSpaces(5);

        t4->insertItem(dagger);
        t4->equipItem(dagger);
        t4->insertItem(leatherarm);
        t4->equipItem(leatherarm);
        t4->insertItem(hp3);
        t4->insertItem(mp3);
        t4->insertItem(hp4);

        w1->setSpaces(5);

        w1->insertItem(staff);
        w1->equipItem(staff);
        w1->insertItem(leatherarm);
        w1->equipItem(leatherarm);
        w1->insertItem(hp3);
        w1->insertItem(mp3);
        w1->insertItem(hp4);

        w2->setSpaces(5);

        w2->insertItem(grimoire);
        w2->equipItem(grimoire);
        w2->insertItem(leatherarm);
        w2->equipItem(leatherarm);
        w2->insertItem(hp3);
        w2->insertItem(mp3);
        w2->insertItem(hp4);

        /* Rodada completa */

        cout << team1->toString();
        cout << team2->toString();

        //Escolha aleatoria sem repeticao:
        srand(time(NULL) + rand());
        int m[2][4];
        for(int i=0; i<2; i++){
            for(int j=0; j<4; j++){
                m[i][j] = 0;
            }
        }

        for(int i=0; i<8; i++){
            int r1 = rand()%2;
            int r2 = rand()%4;

            int counter = 0;
            while(m[r1][r2] != 0){
                if(counter<3){
                    if(r2 != 3){
                        r2++;
                    }
                    else{r2 = 0;}
                    counter++;
                }
                else{
                    counter = 0;
                    r1++;
                }
            }
            m[r1][r2] = 1;

            if(r1==0){
                if(r2==0){
                    cout << k1->getName() << "\n";
                    k1->attack(k2);
                    k1->attack(t2);
                    k1->attack(t4);
                    k1->attack(w2);

                }
                if(r2==1){
                    cout << t1->getName() << "\n";
                    t1->attack(k2);
                    t1->attack(t2);
                    t1->attack(t4);
                    t1->attack(w2);

                }
                if(r2==2){
                    cout << w1->getName() << "\n";
                    w1->attack(k2);
                    w1->attack(t2);
                    w1->attack(t4);
                    w1->attack(w2);

                }
                if(r2==3){
                    cout << t3->getName() << "\n";
                    t3->attack(k2);
                    t3->attack(t2);
                    t3->attack(t4);
                    t3->attack(w2);

                }
            }
            else{
                if(r2==0){
                    cout << k2->getName() << "\n";
                    k2->attack(k1);
                    k2->attack(t1);
                    k2->attack(t3);
                    k2->attack(w1);

                }
                if(r2==1){
                    cout << t2->getName() << "\n";
                    t2->attack(k1);
                    t2->attack(t1);
                    t2->attack(t3);
                    t2->attack(w1);

                }
                if(r2==2){
                    cout << w2->getName() << "\n";
                    w2->attack(k1);
                    w2->attack(t1);
                    w2->attack(t3);
                    w2->attack(w1);

                }
                if(r2==3){
                    cout << t4->getName() << "\n";
                    t4->attack(k1);
                    t4->attack(t1);
                    t4->attack(t3);
                    t4->attack(w1);

                }
            }


        }

        //team1->resolveBattle(team2);
        //team2->resolveBattle(team1);

        //cout << team1->getResults();
        //cout << team2->getResults();
    //}

    /* Freeing my code *
    delete sword;
    delete dagger;
    delete staff;
    delete club;
    delete axe;
    delete lance;
    delete polearm;
    delete grimoire;
    delete bow;
    delete woodarm;
    delete steelarm;
    delete stonearm;
    delete brassarm;
    delete leatherarm;
    delete silverarm;
    delete hp1;
    delete hp2;
    delete hp3;
    delete hp4;
    delete hp5;
    delete mp1;
    delete mp2;
    delete mp3;
    delete mp4;
    delete mp5;
    delete k1;
    delete k2;
    delete t1;
    delete t2;
    delete t3;
    delete t4;
    delete w1;
    delete w2;
    delete team1;
    delete team2;*/


    return 0;
}
