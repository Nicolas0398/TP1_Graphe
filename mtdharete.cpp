#include <iostream>
#include "Sommet.hpp"
#include "Arete.hpp"


using namespace std;

/// //////Constructeurs//Destructeurs////////

Arete::Arete():m_A(0),m_B(0)
{
    m_A= new Sommet();
    m_B= new Sommet();
}

Arete::~Arete()
{}

/// ////Getters//Setters/////////////////////

void Arete::setsommetA(Sommet A)
{
    m_A=&A;
}

void Arete::setsommetB(Sommet B)
{
    m_B=&B;
}

Sommet* Arete::getsommetA()
{
    return m_A;
}

Sommet* Arete::getsommetB()
{
    return m_B;
}








