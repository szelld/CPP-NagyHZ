#include <iostream>
#include "Bejegyzes.h"
#include "Ceg.h"
#include "Ember.h"

int main() {

    Bejegyzes *a= new Bejegyzes("Fnyad", "fa", 1);
    Bejegyzes *b= new Bejegyzes("Anyad", "fa", 1);

    int nyolc = a->osszehasonlit(*b);

    std::cout << nyolc;

    Ember *c = new Ember("Arany Jani", "Fa", 14, "Jancsi", 15);

    c->setBecenev("Futy Imre");
    

    return 0;
}
