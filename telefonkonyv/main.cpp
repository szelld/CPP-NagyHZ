#include <iostream>
#include "Bejegyzes.h"
#include "Ceg.h"
#include "Ember.h"
#include "Telefonkonyv.h"
#include "fstream"
#include "string5.h"

int main() {

    Telefonkonyv test;

    for (int i = 0; i < test.getLen(); ++i) {
        test[i]->kiir();
    }




    //std::getline(be,test);
    ///telefonkonyvben lesz egy init, ott lesz a file beolvasasa+tombfeltotes és lesz egy insert op ami berakja a megfelelő pointerre

    return 0;
}
