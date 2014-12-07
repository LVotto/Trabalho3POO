#include "Item.hh"
#include "Character.hh"


Item::Item(){}

Item::Item(string name, double price){
        this->name = name;
        this->price = price;
    }

Item::Item(Item* item){
        this->name = item->getName();
        this->price = item->getPrice();
    }

string Item::getName(){
        return name;
    }

double Item::getPrice(){
        return price;
    }

void Item::setOwner(Character *owner){
    this->owner = owner;
}

Character* Item::getOwner(){
        return owner;
}

bool Item::isEquipped(){return false;}

Item::~Item(){}
