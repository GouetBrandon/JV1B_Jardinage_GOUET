#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <iostream>
#include <string>
#include "Botaniste.cpp"
#include "Plante.cpp"
#include "Plante.h"

using namespace std;

class Botaniste{

    protected:
        string _name;
        int _money = 100;
        bool _sleep = false;

    public:

        Botaniste();
        Botaniste(string name,int money);

        string getName();
        string setName(string newName);

        int getMoney();
        int setMoney(int value);

        bool sleep();
        void buyPlant();
        void sell();
        void buyEngrais();

};












#endif