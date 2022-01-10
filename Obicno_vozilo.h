
#ifndef MAIN_CPP_OBICNO_VOZILO_H
#define MAIN_CPP_OBICNO_VOZILO_H
#include "Vozilo.h"

class Obicno_vozilo : public Vozilo {
private:

    int startna_cena=120;

public:

    Obicno_vozilo(string name): Vozilo(name){}

    double izracunajCenu(Put p){
        double cena_puta=0;
        cena_puta=startna_cena+p.izracunajDuzinuPuta()*0.1;
        return cena_puta;
    }



};


#endif //MAIN_CPP_OBICNO_VOZILO_H
