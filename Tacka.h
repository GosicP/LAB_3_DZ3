

#ifndef LAB_3_DZ3_TACKA_H
#define LAB_3_DZ3_TACKA_H
using namespace std;
#include "Lista.h"
#include <iostream>
#include <cmath>

class Tacka {
private:

    int x_koordinata, y_koordinata;

protected:
    virtual void pisi(ostream& os){
        os<<"("<<getXKoordinata()<<","<<getYKoordinata()<<")";
    }
public:
    int getXKoordinata() const {
        return x_koordinata;
    }

    int getYKoordinata() const {
        return y_koordinata;
    }

    Tacka(int x, int y){
        x_koordinata=x;
        y_koordinata=y;
    }

    double izracunajUdaljenost(Tacka t2){
        double udaljenost;
        udaljenost=sqrt((this->x_koordinata-t2.x_koordinata)*(this->x_koordinata-t2.x_koordinata)+(this->y_koordinata-t2.y_koordinata)*(this->y_koordinata-t2.y_koordinata));
        return udaljenost;
    }

    bool uporediTacke(Tacka t1, Tacka t2){
        if((t1.x_koordinata==t2.x_koordinata) && (t1.y_koordinata==t2.y_koordinata)){
            return true;
        }else{
            return false;
        }
    }

    friend ostream& operator<<(ostream& os, Tacka &t){
        t.pisi(os);
        return os;
    }

};


#endif //LAB_3_DZ3_TACKA_H
