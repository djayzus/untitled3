#include <iostream>
#include <cmath>
#include "eau.h"
#include "Menu.h"

int main() {

    int choix = 0;
    bool fin = false;

    while (!fin) {
        menu::menuMain();
        std::cout << "\nFaites votre choix: "<< std::endl;
        std::cin >> choix;
        switch (choix) {

            case 0:
                std::cout << "Fin de l'application!"<< std::endl;
                fin = true;
                break;
            case 1:
                //Ajouter un coût de location avec ses informations
                std::cout << "allo1\n";
                break;
            case 2:
                //Ajouter un coût en électricité avec ses informations
                std::cout << "allo2\n";
                break;
            case 3:
                //Ajouter un coût pour la consommation d'eau avec ses informations
                std::cout << "allo3\n";
                break;
            case 4:
                //Afficher un compte-rendu de la machine avec les coûts entrés, ainsi que les coûts totaux
                //d'utilisation de la machine pour une période déterminée par la personne utilisatrice
                calcul::afficherCalcul();
                break;
            default:
                std::cout << "Choix invalide" << std::endl;
                break;
                //tttttttttttttttttttttttttttttttttttttttfgege
                //jtrjrtvbeb
        }

    }
}