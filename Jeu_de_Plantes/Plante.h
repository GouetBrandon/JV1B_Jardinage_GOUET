#ifndef PLANTE_H
#define PLANTE_H

#include <iostream>
#include <string>
#include "Botaniste.cpp"
#include "Plante.cpp"

using namespace std;

    class Plante{

        protected:

            string _name;
            int _maturity=0;
            int _health=100;
            int _taille=50;
            int _water=50;

        public:

            Plante();
            Plante(string name,int maturity,int health,int taille, int _water);

            string getName();
            string setName(string newName);

            int getMaturity();
            int setMaturity(int value);
            int getHealth();
            int setHealth(int value);
            int getTaille();
            int setTaille(int value);
            int getWater();
            int setWater(int value);

            void grow();

    };

    class Fleur : public Plante{

        private:
            string _name;
            bool _flower;

        public:
            Fleur();
            Fleur(string name, bool flower);

            string getName();
            string setName(string newName);
            bool flower();

    };

    class Carnivore : public Plante{

        private:
            string _name;
            bool _mouche;

        public:
            Carnivore();
            Carnivore(string name, bool mouche);

            string getName();
            string setName(string newName);
            bool mouche();

    };











#endif