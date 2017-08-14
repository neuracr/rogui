#ifndef CHAMPS_H_INCLUDED
#define CHAMPS_H_INCLUDED

#include "Batiments.h"

class Champs : public Batiments
{
public:
    Champs(int vie, int production);
    virtual ~Champs();
    void
private:
    int m_production;
    int m_fortune;
};

#endif// CHAMPS_H_INCLUDED
