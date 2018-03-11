#include <iostream>
#include "Sommet.hpp"
#include "Arete.hpp"
#include "Graphe.h"
#include <vector>

using namespace std;

/// //////Constructeurs//Destructeurs////////

Graphe::Graphe():m_ordre(0){}

Graphe::~Graphe(){}

/// ////Getters//Setters/////////////////////

int Graphe::getordre()
{
    return m_ordre;
}

void Graphe::setordre(int ordre)
{
    m_ordre=ordre;
}

/// ///Methodes//////////////////////////////

void Graphe::allouerordre(int ordre)
{
    /// Si l'ordre de la matrice est de 4 il faut 4X4 cases soit ici ordreXordre aretes possibles
    for(int i(0);i<(ordre*ordre);i++)
    {
        vectaretes.push_back(Arete());
    }
    /// Si nous avons 4 personnages (sommets) alors il nous faudra que 4 cases
    for(int i(0);i<ordre;i++)
    {
        vectsommets.push_back(Sommet());
    }
}



