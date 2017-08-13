#ifndef ATTAQUANT_H_INCLUDED
#define ATTAQUANT_H_INCLUDED

#include <string>

class Attaquant:
{
    public:
        Attaquant();
        virtual ~Attaquant();

        void recevoirDegats(int degats);
        void attaquer(); //attaque la cible contenue dans m_cible
        void setCible(Batiment* nouvelleCible);

    protected:
        Batiment *cible;
        std::string typeUnite;
};


#endif // ATTAQUANT_H_INCLUDED
