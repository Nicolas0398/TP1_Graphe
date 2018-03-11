#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED

#include <vector>
using namespace std;

class Graphe
{
private:
    vector <Arete> vectaretes;
    int m_ordre;
    vector <Sommet> vectsommets;
public:
    Graphe();
    ~Graphe();
    int getordre();
    void setordre(int ordre);
    void allouerordre(int ordre);
    void ouvrirfichier(string nomfichier);
    void afficher();




};

#endif // GRAPHE_H_INCLUDED
