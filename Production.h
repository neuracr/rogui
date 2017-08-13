#ifndef PRODUCTION_H_INCLUDED
#define PRODUCTION_H_INCLUDED

#include "Batiments.h"

class Production : public Batiments
{
public:
    void gainPieceOr(int production);
protected :
    int m_fortune;
};

#endif // PRODUCTION_H_INCLUDED
