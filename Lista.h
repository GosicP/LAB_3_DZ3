
#ifndef LAB_3_DZ3_LISTA_H
#define LAB_3_DZ3_LISTA_H
#include <exception>
#include <iostream>
using namespace std;
class GNemaPod: public exception{
public:
    const char* what() const noexcept override{
        return "*** Nema Podatka!";
    }
};

template<typename T>
class Lista {
private:
    struct node{
        T pod;
        node* next;
        int pozicija=0;
        node(T& t, node* s=nullptr){
            pod=t;
            next=s;
        }
    };

    node* first, last, tek;

    int br=0;

    void kopiraj(const Lista &l);

    void premesti(Lista &l){
        first=l.first;
        last=l.last;
        tek=l.tek;
        l.first=l.last=nullptr;
    };

    void brisi();

public:

    Lista(const Lista& l){
        kopiraj();
    }

    Lista(Lista&& l){
        premesti();
    }

    ~Lista(){
        brisi();
    }

    Lista& operator += (T& podatak){
        last=(!first ? first : last->next)=new node(podatak);
        last.pozicija=br;
        br++;
        return *this;
    }

    int getBr() const;

    T dohvSaPozicije(int i){
        for(node* temp=first; temp!=nullptr; temp=temp->next){
            if(i>br){
                throw GNemaPod();
            }
            if(i==temp->pozicija){
                return temp->pod;
            }
        }
    }

};

template<typename T>
void Lista<T>::brisi(){
    while(first){
        node* temp=first;
        first=first->next;
        delete temp;
    }
    last=tek=nullptr;
}

template<typename T>
void Lista<T>::kopiraj(const Lista& l){
    first=last=tek=nullptr;
    for (node* temp=l.first ; temp ; temp=temp->next){
        last = (!first ? first : last->next) = new node(temp->pod);
    }
}

template<typename T>
int Lista<T>::getBr() const {
    return br;
}


#endif //LAB_3_DZ3_LISTA_H
