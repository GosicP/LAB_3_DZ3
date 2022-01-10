

#ifndef LAB_3_DZ3_VOZILO_H
#define LAB_3_DZ3_VOZILO_H
#include <iostream>
using namespace std;
#include "Put.h"
class Vozilo {
private:
    string tip_vozila;
    int startna_cena=0;
    virtual void pisi(ostream& os){
        os<<tip_vozila;
    }
public:

    Vozilo(string vehicle_type){
        tip_vozila=vehicle_type;
    }

    virtual double izracunajCenu(Put p) {}

    friend ostream& operator<<(ostream& os, Vozilo& v){
        v.pisi(os);
        return os;
    }

};


#endif
