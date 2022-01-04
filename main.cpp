#include <iostream>
using namespace std;
#include "Tacka.h"
#include "Put.h"
#include "Vozilo.h"
int main() {
    double udaljenost;
    double cena;
    Tacka *t1=new Tacka(3, 4);
    Tacka *t2 = new Tacka(0,0);
    Tacka *t3= new Tacka(5, 12);
    Put p;
    p+=t1;
    p+=t2;
    p+=t3;
    Vozilo v("Fiat Punto");
    udaljenost=p.izracunajDuzinuPuta();
    cout<<udaljenost<<endl;
    cout<<p<<endl;
    cena=v.izracunajCenu(p);
    cout<<cena<<endl;
    cout<<v<<endl;
    return 0;
}
