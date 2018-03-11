#include <iostream>
#include "Sommet.hpp"
#include "Arete.hpp"
#include "Graphe.h"
#include <vector>
#include <fstream>

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
    /// Si nous avons 4 personnages (sommets) alors il nous faudra que 4 cases
    for(int j(0);j<ordre;j++)
    {
        vectsommets.push_back(Sommet());

    }
}

void Graphe::ouvrirfichier(string nomfichier)
{
     ifstream fichier(nomfichier, ios::in);  /// on ouvre en lecture seulement
        if(fichier)
        {

                int ordre;
                fichier>>ordre;       /// on recupère le nombre de personnes de la société secrète
                allouerordre(ordre);  /// on prepare un tableau de la taille du nombre de personnes
                string contenu;       /// on prepare à recevoir le flux du fichier
                int s(0);             /// cette variable va permettre d'indiquer l'indice du vecteur d'aretes
                for(int m(0);m<ordre;m++)
                {
                 fichier>>contenu;
                 vectsommets[m].setnom(contenu); /// on donne un nom à tous nos sommets qui par défaut s'app "????"
                }
                for(int j(0);j<ordre;j++)        /// dans le fichier on se trouve à la première ligne contenant des 0 et des 1
                {

                   fichier>>contenu;
                   for(int k(0);k<ordre;k++)
                   {
                     if(contenu.at(k)=='1')     /// si il y a un 1 alors la personne qui correspond à l'indice j du vecteur de sommet influe sur la personne qui correspond à l'indice k
                     {
                         vectaretes.push_back(Arete()); /// on ajoute une arete à notre tableau d'aretes
                         vectaretes[s].setsommetA(vectsommets[j]);  /// le 1er pointeur sur sommet pointe sur le sommet d'indice j
                         vectaretes[s].setsommetB(vectsommets[k]);  /// le 2e  pointeur sur sommet pointe sur le sommet d'indice k
                         cout<<vectaretes[s].getsommetA()->getnom()<<" influence "<<vectaretes[s].getsommetB()->getnom()<<endl; /// ceci était une ligne qui me permetait de verifier que l'opperation c'était bien produite
                         s++; /// on passe à la case suivante du tableau d'arete
                     }
                   }
                }
                /// A partir d'ici je vous mets le code d'origine en commentaire car je n'ai jamais pu trouvé d'où venait l'erreur
                ///si vous dé-commentez cette ligne vous verrez que mon vecteur de aretes possedes des aretes qui pointe toutes sur
                ///le même sommet alors que juste avant qq lignes plus haut ce n'était pas le cas
                /*for(int i(0);i<vectaretes.size();i++)
                {

                    cout<<vectaretes[i].getsommetA()->getnom()<<" "<<vectaretes[i].getsommetB()->getnom()<<endl;

                }*/
                fichier.close();

        }
        else
                cerr << "Impossible d'ouvrir le fichier !" << endl;

}

void Graphe::afficher()
{
    /*for(int i(0);i<vectaretes.size();i++)
                {

                    cout<<vectaretes[i].getsommetA()->getnom()<<" "<<vectaretes[i].getsommetB()->getnom()<<endl;

                }*/
}


