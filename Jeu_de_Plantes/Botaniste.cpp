#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <iostream>
#include <string>
#include "Botaniste.h"
#include "Plante.cpp"
#include "Plante.h"

using namespace std;


    Botaniste::Botaniste(): _name("ToBeDefined"),_money(100) {}

    Botaniste::Botaniste(string name,int money):

        _name(name),_money(money){

        }

    string Botaniste::getName(){
        return _name;
    }

    string Botaniste::setName(string newName){
        _name = newName;
        return _name;
    }

    int Botaniste::getMoney(){
        return _money;
    }
    int Botaniste::setMoney(int value){
        _money=_money + value;
        return _money;
    }



















#endif