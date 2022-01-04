#include <iostream>
using namespace std;
#include "Tacka.h"
#include "Put.h"
int main() {
    double udaljenost;
    Tacka t1(4,3), t2(0,0);
    udaljenost=t1.izracunajUdaljenost(t2);
    cout<<udaljenost;
    return 0;
}
