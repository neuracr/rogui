#include "Batiments.h"

using namespace std;

Batiments::Batiments(int vie) : m_vie(vie)
{

}

Batiments::~Batiments()
{

}

void Batiments::recevoirDegats(int degats)
{
    m_vie -= degats;
    if(m_vie<0)
    {
        m_vie=0;
    }
}
