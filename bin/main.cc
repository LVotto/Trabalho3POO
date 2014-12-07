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

/* Numero de personagens em uma equipe */
/* Definido como 3 para adequar-se 'as demandas do projeto. */
#define CHAR_PER_TEAM 3

using namespace std;

/* Struct que junta Character com a equipe adversaria - util em proximas linhas */
typedef struct Char_Enemy{
    Character* character;
    Team* enemy;
}char_enemy;

int main(){


    /* Weapons */
    Weapon* sword = new Weapon   ("Sword",
                                30.0,
                                30,
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
                                 9,
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

    Team* team1 = new Team("Equipe Vermelha", red);
    Team* team2 = new Team("Equipe Azul", blue);
    vector <Character*> chars;
    cout << "|||||||||||||| BATALHAS ORIENTADAS A OBJETO ||||||||||||||||\n";
    cout << "       Bem-vindo a 'Batalhas Orientadas a Objeto',\n               o jogo mais esperado do ano!\n              (Pelo menos por mim, serio...)\n";
    cout << "       Neste jogo, voce podera' construir duas equipes.\n     Essas equipes lutarao de acordo com a sua vontade.\n";
    cout << "              A diversao e' ilimitada!!!\n";
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";

    for(int i = 1; i<=2*CHAR_PER_TEAM; i++){
        if(i==1){
           cout << "\n< 1 > Equipe vermelha (" << CHAR_PER_TEAM << " desafiantes):\n";
        }
        if(i==CHAR_PER_TEAM+1){
           cout <<"\n < 2 > Equipe azul (" << CHAR_PER_TEAM << " desafiantes):\n";
        }

        string name;
        int choice = 0;
        int spc = 0;

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

        cout << "\nDigite o valor do atributo especial dessa personagem:\n";
        cin >> spc;

        cout << "\n";

        if(choice == 1){
            Knight* kn = new Knight(name, spc);
            chars.push_back(kn);
            kn->insertItem(brassarm);
            kn->equipItem(brassarm);
            kn->insertItem(sword);
            kn->equipItem(sword);
            for(int i = 0; i<3; i++){
                kn->insertItem(hp3);
            }
            cout << "<!> Equipadas: Brass Armor e Sword.\nAdicionadas 3 Satisfactory Health Potions.\n" ;
        }
        if(choice == 2){
            Thief* th = new Thief(name, spc);
            chars.push_back(th);
            th->insertItem(dagger);
            th->equipItem(dagger);
            th->insertItem(leatherarm);
            th->equipItem(leatherarm);
            th->insertItem(hp2);
            th->insertItem(hp3);
            th->insertItem(mp3);
            cout << "<!> Equipadas: Leather Armor e Dagger.\nAdicionadas algumas pocoes.\n";
        }
        if(choice == 3){
            Wizard* wi = new Wizard(name, spc);
            chars.push_back(wi);
            wi->insertItem(grimoire);
            wi->equipItem(grimoire);
            wi->insertItem(leatherarm);
            wi->equipItem(leatherarm);
            for(int i=0;i<3;i++){
                wi->insertItem(mp4);
            }
            cout << "<!> Equipadas: Leather Armor e Grimoire.\nAdicionadas 3 Nice Mana Potions.\n";
        }

        int val = 0;
        do{
            cout << "Digite o valor da forc,a da personagem:\n";
            cin >> val;
        }while(!chars[i-1]->setStrength(val));
        do{
            cout << "Digite o valor da velocidade da personagem:\n";
            cin >> val;
        }while(!chars[i-1]->setSpeed(val));
        do{
            cout << "Digite o valor da destreza da personagem:\n";
            cin >> val;
        }while(!chars[i-1]->setDexterity(val));
        do{
            cout << "Digite o valor da constituicao da personagem:\n";
            cin >> val;
        }while(!chars[i-1]->setConstituition(val));

        if(i<=CHAR_PER_TEAM){ team1->addChar(chars[i-1]); }
        else    { team2->addChar(chars[i-1]); }
    }

    cout << "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\nCOMECO DA BATALHA!\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
    int i;

    /* Starters e' um vetor de structs char_enemy que indica a ordem de combate. */
    char_enemy starters[2*CHAR_PER_TEAM];
    for(i = 0; i < 2*CHAR_PER_TEAM; i++){
        if(i<CHAR_PER_TEAM){
            starters[i].character = team1->getChar(i);
            starters[i].enemy = team2;
        }
        else{
            starters[i].character = team2->getChar(i-CHAR_PER_TEAM);
            starters[i].enemy = team1;
        }
    }

    /* Bubble-Sort que ordena as personagens em starters em ordem de jogada */
    char_enemy aux;
    for(i=0; i<2*CHAR_PER_TEAM; i++){
        for(int j=0; j<2*CHAR_PER_TEAM-1; j++){
            if(starters[j].character->getSpeed() < starters[j+1].character->getSpeed()){
                aux = starters[j];
                starters[j] = starters[j+1];
                starters[j+1] = aux;
            }
        }
    }

    /* Imprimindo a ordem de jogada */
    for(i=0; i<2*CHAR_PER_TEAM; i++){
        cout << starters[i].character->getName() << " ";
    }
    cout << "\n";

    int j;
    i = 0;

    /** ESTRUTURA DE UM TURNO */
    while(!team1->isDefeated() && !team2->isDefeated()){
        /* Verificando se a personagem nao esta' morta. */
        while(!starters[i].character->isAlive()){
            if(i<2*CHAR_PER_TEAM-1){i++;}else{i=0;}
        }
        /* Imprimindo o status de cada personagem na tela */
        cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "Equipe Vermelha:\n";
        for(j = 0; j < CHAR_PER_TEAM; j++){
            cout << team1->getChar(j)->getName() << ": HP = " << team1->getChar(j)->getHP() << " | MP = " << team1->getChar(j)->getMP() << "\n";
        }
        cout << "\nEquipe Azul:\n";
        for(j = 0; j < CHAR_PER_TEAM; j++){
            cout << team2->getChar(j)->getName() << ": HP = " << team2->getChar(j)->getHP() << " | MP = " << team2->getChar(j)->getMP() << "\n";
        }
        cout << "\nVez de " << starters[i].character->getName() << ":\n";



        /* Menu de opcoes */
        int choice = 0;
        while (choice < 1 || choice > 4){
            cout << "1 - Atacar\n";
            cout << starters[i].character->specialDesc();   ///Ataque especial de cada classe;
            cout << "3 - Item\n";
            cout << "4 - Passar a vez\n";
            cin >> choice;
            cout << "\n";
            if(choice < 1 || choice > 4){
                cout << "Digite um numero de 1 a 4.\n";
            }
        }

        int choice2 = 0;

        /* 1 - Atacar */
        if(choice == 1){
            cout << starters[i].enemy->getName() << "\n";
            for(j=0; j<CHAR_PER_TEAM; j++){
                cout << j+1 << " - " << starters[i].enemy->getChar(j)->getName() << "\n";
            }
            cout << "Qualquer outra entrada passa a vez.\n";
            cin >> choice2;

            if(choice2 >= 1 || choice2 <= CHAR_PER_TEAM){
                starters[i].character->attack(starters[i].enemy->getChar(choice2-1));
            }
            else{cout << "\nPassou a vez.\n\n";}
        }

        /* 2 - Special */
        if(choice == 2){
            if(!starters[i].character->special(starters[i].enemy)){
                cout << "\nSem MP o suficiente. Passando a vez.\n\n";
            };
        }

        /* 3 - Item */
        int nPotions = -1;
        Item* potions[3];
        if(choice == 3){
            while(choice2<1 || choice2>nPotions){
                nPotions = 0;
                for(j=0; j<starters[i].character->getSpaces(); j++){
                    Item* item = starters[i].character->searchItem(j);
                    if(item->isPotion()){
                        nPotions++;
                        cout << nPotions << " - " << item->getName() << "\n";
                        potions[j] = item;
                    }
                }
                cin >> choice2;
                if(nPotions == 0){break;}
                if(choice2 <1 || choice2>nPotions){
                    cout << "Digite um numero entre 1 e " << nPotions << "\n";
                }
            }
            potions[choice2-1]->use();              /// Aqui da segmentation fault.
                                                    /// Me desculpa, mas eu nao tenho mais energias pra continuar.

        }

        /** Proxima personagem */
        if(i<2*CHAR_PER_TEAM-1){i++;}else{i=0;}
    }
    if(team1->isDefeated()){cout << "EQUIPE AZUL GANHOU!\n";}
    else{cout << "EQUIPE VERMELHA GANHOU\n";}



    //Freeing my code
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
    delete team1;
    delete team2;


    return 0;
}
