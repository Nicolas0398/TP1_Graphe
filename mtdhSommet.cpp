#include <iostream>
#include "Sommet.hpp"


using namespace std;

/// //////Constructeurs//Destructeurs////////

Sommet::Sommet(): m_nom("????"){}

Sommet::Sommet(string nom): m_nom(nom){}

Sommet::~Sommet(){}

/// ////Getters//Setters/////////////////////

void Sommet::setnom(string nom)
{
    m_nom=nom;
}

string Sommet::getnom()
{
    return m_nom;
}
