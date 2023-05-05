//
// Created by david on 2023. 05. 05..
//

#ifndef TELEFONKONYV_TELEFONKONYV_H
#define TELEFONKONYV_TELEFONKONYV_H

#include "Bejegyzes.h"

class Telefonkonyv {
    static size_t emberek;
    static size_t cegek;
    Bejegyzes *tabla;
public:
    Telefonkonyv() {
        size_t len=emberek+cegek;
        tabla = new Bejegyzes[len];
    }
    //void insert()
    static  void setEmber(size_t ember) {emberek = ember;}
    static  void setCeg(size_t ceg) {cegek = ceg;}

    ~Telefonkonyv(){}
};


#endif //TELEFONKONYV_TELEFONKONYV_H
