#include <string>
#include <iostream>
#include <vector>

#include "Botaniste.cpp"
#include "Plante.cpp"

using namespace std;

int main(){
    Botaniste * monBotaniste = new Botaniste();
    string nomChoisi;

    bool sleep = false;
    bool gameOver = false;
    int action;
    string jardin[6]= {};


    while (!gameOver){
        cout<<"Veuillez choisir un nom pour votre Botaniste :"<<endl;
        cin>>nomChoisi;
        monBotaniste->setName(nomChoisi);
        cout<< "Bonjour et Bienvenue au jardin des Plantes "<<monBotaniste->getName()<<endl;
        cout<< " Que voulez-vous faire ?"<<endl;
        cout<<"Argent : "<<monBotaniste->getMoney()<<endl;
        cout<< " 1: Acheter Fleur  2: Acheter Plante Carnivore  3: Vendre  4: Dormir"<<endl;
        cin>>action;

        if (action == 1);

            monBotaniste->setMoney(-10);
            Fleur * Fleur1 = new Fleur();
            jardin[6] = {Fleur1};
    
    }
}