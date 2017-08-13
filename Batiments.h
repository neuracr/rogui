#ifndef BATIMENTS_H_INCLUDED
#define BATIMENTS_H_INCLUDED

#include <iostream>
#include <string>

class Batiment
{
public:
    void recevoirDegats();
protected :
    int m_vie;
    std::string m_nom;
};

#endif // BATIMENTS_H_INCLUDED
