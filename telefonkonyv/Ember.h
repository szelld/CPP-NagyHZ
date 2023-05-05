//
// Created by david on 2023. 05. 04..
//

#ifndef TELEFONKONYV_EMBER_H
#define TELEFONKONYV_EMBER_H

#include "Bejegyzes.h"

class Ember: public Bejegyzes {
    String becenev;
    int privatSzam;

public:
    Ember(const char* neve, const char* cime, int munkaSzama, const char* beceneve, int privatSzama) : Bejegyzes(neve, cime, munkaSzama), becenev(beceneve), privatSzam(privatSzama) {}
    String getBecenev() {return becenev;}
    int getPrivatSzam() const {return privatSzam;}


    //void setBecenev(String beceneve) {becenev = beceneve;}
    //void setPrivatSzam(int privatSzama) {privatSzam = privatSzama;}

   ~Ember() {}
};


#endif //TELEFONKONYV_EMBER_H
