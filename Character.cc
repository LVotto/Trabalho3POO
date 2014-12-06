#include "Character.hh"

Character::Character(string alias){
    this->alias = alias;
    this->HP = 100;
    this->XP = 1;
    this->strength = 0;
    this->speed = 0;
    this->dexterity = 0;
    this->constituition = 0;
    this->old_speed = 0;
    myitems = new Inventory();
}

string Character::getName(){
    return alias;
}

bool Character::isAlive(){
    if(HP>0){
        return true;
    }
    return false;
}

int Character::getDefensePts(){
    int def = constituition * 0.6;
    def += dexterity * 0.1;
    def += speed * 0.3;
    def += myitems->getTotalDefensePts();
    def *= XP / 6;
    return def;
}

int Character::getAttackPts(){
    int atk = strength * 0.6;
    atk += dexterity * 0.4;
    atk += myitems->getTotalAttackPts();
    atk *= XP / 2;
    return atk;
}

void Character::addHP(int HP){
    this->HP += HP;
    if(this->HP<0){
        this->HP = 0;
    }
}

void Character::addMP(int MP){
    this->MP += MP;
    if(this->MP<0){
        this->MP = 0;
    }
}

void Character::receiveDamage(int damage){
    if(damage>=HP){
        HP = 0;
        cout << "[!] " << alias << " is dead.\n";
    }else{
        if(damage<=0){
            damage = 1;
        }
        HP -= damage;
        cout << "[!] HP = " << HP << "\n";
    }
}

void Character::attack(Character *target){
    srand(time(NULL) + rand());
    double r = (double) rand() / RAND_MAX;
    //cout << r << "\n";
    if(r<0.1/XP){
        cout << "[!] Attack missed.\n";
        return;
    }
    int damage = getAttackPts();
    damage -= target->getDefensePts();
    damage += (rand()%10)-5;
    double r2 = (double) rand() / RAND_MAX;
    if(r2 < 0.01*XP){
        target->receiveDamage(damage);
        cout << "Dano critico!\n";
    }
    target->receiveDamage(damage);
}

void Character::addXP(int newXP){
    if(100-XP < newXP){
        XP = 100;
        cout << "XP = 100.\n";
    }
    else{
        XP += newXP;
    }
}

int Character::totalAttributes(){
    return this->strength+this->speed+this->dexterity+this->constituition;
}

/*int Character::totalAttributesExceptStrength(){
    return this->speed+this->dexterity+this->constituition;
}

int Character::totalAttributesExceptSpeed(){
    return this->strength+this->dexterity+this->constituition;
}

int Character::totalAttributesExceptDexterity(){
    return this->strength+this->speed+this->constituition;
}

int Character::totalAttributesExceptConstituition(){
    return this->strength+this->speed+this->dexterity;
}*/

void Character::setStrength(int strength){
    if(totalAttributes()-(this->strength)+strength <= 100){
        this->strength = strength;
    }
    else{
        cout << "Strength value exceeds maximum, which is: " << 100 - totalAttributes() - this->strength << "\n";
    }
}

void Character::setSpeed(int speed){
    if(totalAttributes()-(this->speed)+speed <= 100){
        this->speed = speed;
        this->old_speed = speed;
    }
    else{
        cout << "Speed value exceeds maximum, which is: " << 100 - totalAttributes() - this->speed << "\n";
    }
}

void Character::setDexterity(int dexterity){
    if(totalAttributes()-(this->speed)+dexterity <= 100){
        this->dexterity = dexterity;
    }
    else{
        cout << "Dexterity value exceeds maximum, which is: " << 100 - totalAttributes() - this->dexterity << "\n";
    }
}

void Character::setConstituition(int constituition){
    if(totalAttributes()-(this->speed)+constituition <= 100){
        this->constituition = constituition;
    }
    else{
        cout << "Constituition value exceeds maximum, which is: " << 100 - totalAttributes() - this->constituition << "\n";
    }
}

void Character::equipItem(Item* item){
    myitems->equipItem(item);
}

void Character::insertItem(Item* item){
    myitems->insertItem(item, this);
}

void Character::removeItem(string itemname){
    myitems->removeItem(itemname);
}

void Character::setSpaces(int spaces){
    myitems->setSpaces(spaces);
}

int Character::getHP(){
    return HP;
}

void Character::refreshSpeed(double weight){
    storeSpeed();
    speed = speed * exp(pow((-1)*weight/20,2));
}

void Character::loadSpeed(){
    speed = old_speed;
}

void Character::storeSpeed(){
    old_speed = speed;
}

Character::~Character(){}
