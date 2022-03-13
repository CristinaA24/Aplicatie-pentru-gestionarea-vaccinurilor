
#include "VaccinAntiHepatita.h"
#include <vector>
using namespace std;


void VaccinAntiHepatita::afisareSchemaVaccinare()
{
    cout << "\tVaccin Antihepatic:\n";
    cout << "Pentru vaccinul pentru tipurile de hepatita A si B:\n";
    cout << "Copii cu varsta mai mica de 1 an: 2 injectari la un interval de o luna, a treia dupa 6 luni de la prima administrare\n";
    cout << "la adulti: conform schemei de imunizare recomandata de medic\n";
    cout << "Pentru vaccinul pentru tipul de hepatita C:\n";
    cout << "Doar la recomandarea medicului\n";
    cout << '\n';

}

VaccinAntiHepatita :: ~VaccinAntiHepatita()
{

}

VaccinAntiHepatita :: VaccinAntiHepatita():Vaccin()
{
    this->tip = "-";
    this->Administrare = "-";
}

VaccinAntiHepatita :: VaccinAntiHepatita(float pret, float tempDepozitare, const vector <string> &substante, const string producator, string tip, string Administrare):Vaccin(pret, tempDepozitare, substante, producator)
{
    this->tip = tip;
    this->Administrare=Administrare;
}

VaccinAntiHepatita :: VaccinAntiHepatita(const VaccinAntiHepatita& c):Vaccin(c)
{
    this->tip = c.tip;
    this->Administrare = c.Administrare;
}

VaccinAntiHepatita& VaccinAntiHepatita::operator=(const VaccinAntiHepatita& c)
{
    if (this!= &c)
    {
        Vaccin::operator=(c);
        this->tip = c.tip;
        this->Administrare = c.Administrare;
    }
    return *this;
}

istream& VaccinAntiHepatita::read(istream& is)
{
    cout << "\tVaccin Anti Hepatita\n";
    Vaccin::read(is);
    cout << "Tipul hepatitei pentru care este vaccinul: ";
    is >> tip;
    cout << "Mod de administrare: ";
    is >> Administrare;
    return is;
}

ostream& VaccinAntiHepatita::print(ostream& os) const
{
    os << "\tVaccin Anti Hepatita\n";
    Vaccin::print(os);
    os << "Tipul hepatitei pentru care este vaccinul: ";
    os << tip<<'\n';
    os << "Mod de administrare: ";
    os << Administrare;
    os << '\n';
    return os;
}
