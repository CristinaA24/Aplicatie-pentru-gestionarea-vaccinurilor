

#ifndef LISTACOMENZI
#define LISTACOMENZI

#include <iostream>
#include <vector>
#include "Comanda.h"
using namespace std;



class ListaComenzi {
private:
    vector <Comanda> comenzi;
public:
    ListaComenzi();
    Comanda operator[](int index);

    ListaComenzi& operator= (const ListaComenzi&c);
    friend ListaComenzi operator+ (ListaComenzi com, const Comanda& c);

};


#endif LISTACOMENZI
