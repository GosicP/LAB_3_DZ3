
#ifndef LAB_3_DZ3_PUT_H
#define LAB_3_DZ3_PUT_H
#include "Tacka.h"
#include "Lista.h"

class GTackaPostoji: public exception{
    const char* what() const noexcept override{
        return "*** Tacka vec postoji";
    }
};

class Put {
private:
Lista<Tacka*> lista_tacaka;

public:

    void operator+=(Tacka *t){
        for(int i=0; i<lista_tacaka.getBr(); i++){
            if(t==lista_tacaka.dohvSaPozicije(i)){
                throw GTackaPostoji();
            }
        }
        lista_tacaka+=t;
    }

    double izracunajDuzinuPuta(){
        double ukupna_udaljenost=0;
        for(int i=0; i<lista_tacaka.getBr(); i++){
            if(i!=0 && i!=lista_tacaka.getBr()){
                ukupna_udaljenost=ukupna_udaljenost+lista_tacaka.dohvSaPozicije(i)->izracunajUdaljenost(*lista_tacaka.dohvSaPozicije(i-1));
            }
        }
        return ukupna_udaljenost;
    }


};


#endif
