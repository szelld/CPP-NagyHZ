#include <iostream>
#include "Bejegyzes.h"
#include "Ceg.h"
#include "Ember.h"
#include "Telefonkonyv.h"
#include "fstream"
#include "string5.h"

int main() {

    int cegekSzama=0, emberekSzama=0;

    Bejegyzes *a= new Bejegyzes("Fnyad", "fa", 1);
    Bejegyzes *b= new Bejegyzes("Anyad", "fa", 1);

    int nyolc = a->osszehasonlit(*b);

    std::cout << nyolc;

    Bejegyzes *c = new Ember("Arany Jani", "Fa", 14, "Jancsi", 15);

    Telefonkonyv::setEmber(5);

    //Telefonkonyv telefonkonyv;

    //telefonkonyv

    std::ifstream be;
    be.open("txt");
    String test;
    std::getline(be,test);  ///char*-ba kell beolvasni majd azt kell beleKonstruktálni az ember/ceg be hogy mukodjon a beolvasas
    ///telefonkonyvben lesz egy init, ott lesz a file beolvasasa+tombfeltotes és lesz egy insert op ami berakja a megfelelő pointerre

    return 0;
}
