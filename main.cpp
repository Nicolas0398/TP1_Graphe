#include <iostream>
#include "Sommet.hpp"
#include "Arete.hpp"
#include "Graphe.h"

using namespace std;

int main()
{
    string nomfic;
    cout<<"Saisir nom du fichier (test: societe_secrete.txt): ";
    cin>>nomfic;
    Graphe g;
    g.ouvrirfichier(nomfic);
    g.afficher();
    return 0;
}
