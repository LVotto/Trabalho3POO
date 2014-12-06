#ifndef TEAM_H_
#define TEAM_H_

#include "Character.hh"
#include <sstream>
using namespace std;

enum Color{
    blue,
    red,
    green,
    yellow,
    white,
    black
};

class Team{

private:
    string name;
    Color color;
    int size;
    int win;
    int lose;
    int draw;
    vector<Character*> characters;

public:
    Team(string, Color);

    ~Team();

    string getName();

    Color getColor();

    string getResults();

    string toString();

    int resolveBattle(Team&);

    void addChar(Character*);

    void removeChar(int);

    void removeChar(Character*);

    Character* searchChar(string);

    double getPoints();


};

#endif // TEAM_H_
