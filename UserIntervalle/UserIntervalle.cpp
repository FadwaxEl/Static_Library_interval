// UserIntervalle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Tableau.h"
#include"TableauBorne.h"
using namespace interval;
using namespace std;
int main()
{
    cout << "\n----------------Hello World!------------\n";
    /*Tableau T(3);
    Tableau T1(4);
    T.Remplir();
    T[1] = 854985;
    T.print();
    T1 = T;
    T1.print();*/
    TableauBorne T3(4, 0, 6);
    T3.TableauBorne::Remplir();
    T3.print();
    float val = T3[1];
    T3(1, 2);
    T3.print();



}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
