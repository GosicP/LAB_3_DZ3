#include <iostream>
using namespace std;
#include "Tacka.h"
#include "Put.h"
int main() {
    double udaljenost;
    Tacka *t1=new Tacka(3, 4);
    Tacka t2(0,0), t3(5, 12);
    Put p();
    p+=t1;

    return 0;
}
