
#ifndef COMANDA
#define COMANDA

#include <iostream>
#include <vector>
using namespace std;



class Comanda {
private:
    const int idComanda;
    string data;
    string client;
    vector <string> listaVaccinuri;
    vector <int> cantitate;
public:
    static int id;
    Comanda();
    Comanda(string data, string client, vector <string> listaVaccinuri, vector <int> cantitate);
    Comanda(const Comanda&c);
    ~Comanda();
    bool Anotimp();

    Comanda& operator=(const Comanda& c);
    friend ostream& operator<<(ostream& os, const Comanda&c);
    friend istream& operator>>(istream& is, Comanda&c);

};


#endif COMANDA
