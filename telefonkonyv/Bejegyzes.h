//
// Created by david on 2023. 05. 04..
//

#ifndef TELEFONKONYV_BEJEGYZES_H
#define TELEFONKONYV_BEJEGYZES_H

#include "string5.h"

class Bejegyzes {
    String nev;
    String cim;
    int munkaSzam;
    Bejegyzes *next;

public:
    Bejegyzes(): nev(""), cim(""), munkaSzam(0), next(NULL) {}
    Bejegyzes(const String neve, const String cime, int munkaSzama) : nev(neve), cim(cime), munkaSzam(munkaSzama), next(NULL) {}
    int osszehasonlit (const Bejegyzes& rhs);
    virtual void kiir() {}

    String getNev() {return nev;}
    String getCim() {return cim;}
    int getMunkaSzam() const {return munkaSzam;}

    virtual ~Bejegyzes(){}
};


#endif //TELEFONKONYV_BEJEGYZES_H