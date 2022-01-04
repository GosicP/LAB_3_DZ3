

#ifndef LAB_3_DZ3_VOZILO_H
#define LAB_3_DZ3_VOZILO_H
#include <iostream>
using namespace std;
#include "Put.h"
class Vozilo {
private:
    string tip_vozila;
    int startna_cena=120;
    virtual void pisi(ostream& os){
        os<<tip_vozila;
    }
public:

    Vozilo(string vehicle_type){
        tip_vozila=vehicle_type;
    }

    double izracunajCenu(Put p){
        double cena_puta;
        cena_puta=startna_cena+p.izracunajDuzinuPuta()*0.1;
        return cena_puta;
    }

    friend ostream& operator<<(ostream& os, Vozilo& v){
        v.pisi(os);
        return os;
    }

};


#endif
