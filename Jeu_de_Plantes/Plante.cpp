#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include <string>
#include "Botaniste.cpp"
#include "Plante.h"

using namespace std;

    Plante::Plante(): _name("RandomPlant"), _maturity(0), _health(100), _taille(50), _water(50) {}
    Plante::Plante(string name,int maturity,int health,int taille,int water):

        _name(name),_maturity(maturity),_health(health),_taille(taille),_water(water){

        }

    string Plante::getName(){
        return _name;
    }

    string Plante::setName(string newName){
        _name = newName;
        return _name;
    }

    int Plante::getMaturity(){
        return _maturity;
    }
    int Plante::setMaturity(int value){
        _maturity = _maturity + value;
        return _maturity;
    }
    int Plante::getHealth(){
        return _health;
    }
    int Plante::setHealth(int value){
        _health = _health + value;
        return _health;
    }
    int Plante::getTaille(){
        return _taille;
    }
    int Plante::setTaille(int value){
        _taille = _taille + value;
        return _taille;
    }
    int Plante::getWater(){
        return _water;
    }
    int Plante::setWater(int value){
        _water = _water + value;
        return _water;
    }

    void Plante::grow(){
        _maturity = _maturity + 5;
        _taille = _taille + 5;
        _water = _water - 10;
    }


    Fleur::Fleur():_name("RandomFlower"), _flower(false) {}
    Fleur::Fleur(string name, bool flower):

        _name(name),_flower(flower){

        }

    string Fleur::getName(){
        return _name;
    }

    string Fleur::setName(string newName){
        _name = newName;
        return _name;
    }

    bool Fleur::flower(){
        return _flower;
    }


    Carnivore::Carnivore():_name("RandomCarnivore"), _mouche(false) {}
    Carnivore::Carnivore(string name, bool mouche):

        _name(name),_mouche(mouche){

        }

    string Carnivore::getName(){
        return _name;
    }

    string Carnivore::setName(string newName){
        _name = newName;
        return _name;
    }

    bool Carnivore::mouche(){
        return _mouche;
    }







#endif