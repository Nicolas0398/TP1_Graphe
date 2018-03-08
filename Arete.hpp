#ifndef ARETE_HPP_INCLUDED
#define ARETE_HPP_INCLUDED


using namespace std;

class Arete
{
private:
    Sommet* m_A;
    Sommet* m_B;
public:
    Arete();
    ~Arete();
    void setsommetA(Sommet A);
    void setsommetB(Sommet B);
    Sommet* getsommetA();
    Sommet* getsommetB();


};

#endif // ARETE_HPP_INCLUDED
