#include "Inventory.hh"

Inventory::Inventory(){
    this->spaces = 1;
    this->gold = 0;
}

double Inventory::getTotalGold(){
    return this->gold;
}

int Inventory::getAvailableSpace(){
    return this->spaces;
}

void Inventory::spendGold(double debt){
    if(debt<=this->gold){
        this->gold -= debt;
        return;
    }
    cout << "You don't have that much gold.\n";
}

void Inventory::earnGold(double gold){
    this->gold += gold;
}

void Inventory::setSpaces(int newspace){
    if(newspace>=0){
        spaces = newspace;
        return;
    }
    cout << "I can't set negative space to your inventory.\n";
}

Item* Inventory::searchItem(string itemname){
    int i = 0;

    while(this->items[i]->getName() != itemname){
        i++;
    }

    if(i>=spaces){
        cout << "Item not found.\n";
        return NULL;
    }
    return this->items[i];
}

int Inventory::searchItemIndex(string itemname){
    int i = 0;


    while(items[i]->getName().compare(itemname) != 0 && i<(int)items.size()){
        //cout << i << "\n";
        i++;
    }

    if(i>=(int)items.size()){
        cout << "Item not found.\n";
        return -1;
    }
    return i;
}

Item* Inventory::searchItem(int id){
    if(id<spaces && id>0){
        return this->items[id];
    }
    cout << "Item out of range.\n";
    return NULL;
}

void Inventory::insertItem(Item *item, Character* owner){
    if(items.size() < (unsigned int)spaces){
        items.push_back(item);
        item->setOwner(owner);
        return;
    }
    cout << "You don't have enough space in your inventory.\n";
}

void Inventory::removeItem(string itemname){
    int index = searchItemIndex(itemname);
    if(index>=0){
        items.erase(items.begin()+index);
    }
}

void Inventory::removeItem(int id){
    if(id>=0 && id<spaces){
        items.erase(items.begin()+id);
        return;
    }
    cout << "Item out of range.\n";
}

int Inventory::getTotalDefensePts(){
    int def = 0;
    for(int i = 0; i<(int)items.size(); i++){
        if(items[i]->isEquipped()){def+=items[i]->getDefensePts();}
    }
    return def;
}

int Inventory::getTotalAttackPts(){
    int atk = 0;
    for(int i = 0; i<(int)items.size(); i++){
        if(items[i]->isEquipped()){
                atk+=items[i]->getAttackPts();
        }
    }
    return atk;
}

void Inventory::equipItem(Item* item){

    items[searchItemIndex(item->getName())]->equip();

}

Inventory::~Inventory(){
    for(int i = 0; i<spaces; i++){
        items.erase(items.begin()+i);
    }
    delete this;
}
