
#include "Comanda.h"
#include <vector>
using namespace std;

Comanda::Comanda(): idComanda(id++)
{
    this->data = "-";
    this->client = "-";
}

Comanda::Comanda(string data, string client, vector <string> listaVaccinuri, vector <int> cantitate): idComanda(id++)
{
    this->data = data;
    this->client = client;
    for (int i = 0; i < listaVaccinuri.size(); ++i)
        this->listaVaccinuri.push_back(listaVaccinuri[i]);
    for (int i = 0; i < cantitate.size(); ++i)
        this->cantitate.push_back(cantitate[i]);
}

Comanda::Comanda(const Comanda& c):idComanda(id++)
{
    this->data = c.data;
    this->client = c.client;
    for (int i = 0; i < c.listaVaccinuri.size(); ++i)
        this->listaVaccinuri.push_back(c.listaVaccinuri[i]);
    for (int i = 0; i < c.cantitate.size(); ++i)
        this->cantitate.push_back(c.cantitate[i]);
}

Comanda& Comanda::operator=(const Comanda& c)
{
    if (this!= &c)
    {
        this->data = c.data;
        this->client = c.client;
        for (int i = 0; i < c.listaVaccinuri.size(); ++i)
            this->listaVaccinuri.push_back(c.listaVaccinuri[i]);
        for (int i = 0; i < c.cantitate.size(); ++i)
            this->cantitate.push_back(c.cantitate[i]);
    }
    return *this;
}

Comanda::~Comanda()
{

}

istream& operator>> (istream& is, Comanda &c)
{
    cout << "Data comenzii: ";
    is >> c.data;
    cout << "Clientul comenzii: ";
    is >> c.client;
    cout << "Numarul de tipuri de vaccin comandate (Antigripal, antihepatic, AntiSarsCov2): ";
    int numar;
    is >> numar;
    string aux;
    cout << "Tipurile de vaccin comandate:\n";
    for (int i = 0; i < numar; ++i)
    {
        is >> aux;
        c.listaVaccinuri.push_back(aux);
    }
    cout << "Numarul de doze din fiecare tip:\n";
    int x;
    for (int i = 0; i < numar; ++i)
    {
        is >> x;
        c.cantitate.push_back(x);
    }
    return is;
}

ostream& operator<< (ostream& os, const Comanda& c)
{
    os << "ID comanda: "<<c.idComanda<<'\n';
    os << "Data comenzii: "<<c.data<<'\n';
    os << "Clientul comenzii: "<<c.client<<'\n';
    os << "Vaccinuri comandate:\n";
    for (int i = 0; i < c.listaVaccinuri.size(); ++i)
        os << c.listaVaccinuri[i] << " in numar de " << c.cantitate[i] << " doze\n";
    return os;
}


