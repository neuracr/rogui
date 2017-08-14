#ifndef BATIMENTS_H_INCLUDED
#define BATIMENTS_H_INCLUDED

#include <iostream>
#include <string>

class Batiments
{
public:
    Batiments(int vie);
    virtual ~Batiments();
    void recevoirDegats(int degats);
protected :
    int m_vie;
    std::string m_nom;
};

#endif // BATIMENTS_H_INCLUDED
