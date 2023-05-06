//
// Created by david on 2023. 05. 05..
//

#ifndef TELEFONKONYV_TELEFONKONYV_H
#define TELEFONKONYV_TELEFONKONYV_H

#include "Bejegyzes.h"
#include "Ember.h"
#include "Ceg.h"
#include "fstream"

class Telefonkonyv {
    static size_t emberek;
    static size_t cegek;
    size_t len;
    Bejegyzes *tabla[];
public:
    Telefonkonyv() {
        std::ifstream fileIn;
        String nameFile;
        std::cout << "Irja be a file nevet!";
        std::cin >> nameFile;
        fileIn.open(nameFile.c_str(), std::fstream::in);

        if (fileIn.is_open()) {
            std::cout << "Siker" << std::endl;
        }

        fileIn >> emberek;
        fileIn >> cegek;
        len = emberek+cegek;
        if (len == 0) len = 1;
        *tabla = new Bejegyzes[len];

        for (int i = 0; i < emberek; ++i) {
            String nev, cim, becenev, kozTer, hazszam, space = " ";
            int privSzam, munkaSzam;
            fileIn >> nev >> cim >> kozTer >>  hazszam >> becenev >> privSzam >> munkaSzam;
            cim += space + kozTer + space + hazszam;
            tabla[i] = new Ember(nev, cim, munkaSzam, becenev , privSzam);
        }
        for (int i = emberek; i < emberek+cegek; ++i) {
            String nev, cim, tipus, kozTer, hazszam, space = " ";
            int adoSzam, munkaSzam;
            fileIn >> nev >> cim >> kozTer >>  hazszam >> tipus >> adoSzam >> munkaSzam;
            cim += space + kozTer + space + hazszam;
            tabla[i] = new Ceg(nev, cim, munkaSzam, tipus, adoSzam);
        }
    }


    static  void setEmber(size_t ember) {emberek = ember;}
    static  void setCeg(size_t ceg) {cegek = ceg;}


    size_t getLen() {return len;}

    Bejegyzes* operator[](size_t idx) {return tabla[idx];}

    ~Telefonkonyv() {
        for (int i = 0; i < emberek+cegek; ++i) {
            delete[] tabla[i];
        }
    }
};


#endif //TELEFONKONYV_TELEFONKONYV_H
