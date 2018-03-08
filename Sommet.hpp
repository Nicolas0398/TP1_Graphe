#ifndef SOMMET_HPP_INCLUDED
#define SOMMET_HPP_INCLUDED


using namespace std;

class Sommet
{
private:
    string m_nom;

public:
    Sommet();
    Sommet(string nom);
    ~Sommet();
    void setnom(string nom);
    string getnom();
};


#endif // SOMMET_HPP_INCLUDED
