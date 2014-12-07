#include "Team.hh"

Team::Team(string name, Color color){
    this->name = name;
    this->color = color;
    this->win = 0;
    this->draw = 0;
    this->lose = 0;
    this->size = 0;
}

Team::~Team(){
    //for(int i = 0; i<size; i++){
    //    characters.erase(characters.begin()+i);
    //}
    delete this;
}

string Team::getName(){
    return this->name;
}

Color Team::getColor(){
    return this->color;
}

string Team::getResults(){

    stringstream str;

    str << "Wins: " << win <<
            "\nDraws: " << draw <<
            "\nLoses: " << lose <<
            "\n";

    return str.str();
}

string Team::toString(){

    stringstream str;

    str << getName() << "\n" << getColor() << "\n";

    return str.str();

}

int Team::getSize(){
    return size;
}

double Team::getPoints(){
    double pts = 0;
    int i;
    for(i = 0; i<size; i++){
        pts += (double) characters[i]->getHP();
    }
    pts = pts/i;
    return pts;
}

int Team::resolveBattle(Team& oponent){
    double a = this->getPoints();
    double b = oponent.getPoints();

    if(a > b){win++; return 1;}

    else if(a < b){lose++; return -1;}

    else{draw++; return 0;}
}

void Team::removeChar(int id){
    if(id>=0 && id<size){
        characters.erase(characters.begin()+id);
        return;
    }
    cout << "Character out of range.\n";
}

void Team::removeChar(Character* c){
    int i=0;
    while(characters[i]->getName() != c->getName() && i<size){
        i++;
    }
    if(i>=0 && i<size){
        characters.erase(characters.begin()+i);
        size--;
        return;
    }
    cout << "Character not found.\n";
}

Character* Team::searchChar(string alias){
    int i=0;
    while(characters[i]->getName() != alias && i<(int)characters.size()){
        i++;
    }
    if(i>=0 && i<=(int)characters.size()){
        return characters[i];
    }
    return NULL;
}

void Team::addChar(Character* c){
    characters.push_back(c);
    size++;
}

Character* Team::getChar(int p){
    return characters[p];
}

bool Team::isDefeated(){
    int i=0;
    while(i<(int)characters.size() && !getChar(i)->isAlive() ){
        i++;
    }
    if(i == size && !getChar(i-1)->isAlive()){
        return true;
    }
    return false;
}
