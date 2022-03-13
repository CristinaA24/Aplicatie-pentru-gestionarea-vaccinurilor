
#include "VaccinAntiSarsCov2.h"
#include <vector>
using namespace std;

void VaccinAntiSarsCov2::afisareSchemaVaccinare()
{
    cout<<"\tVaccin Anti SarsCov2:\n";
    cout<<"Se administreaza persoanelor cu varsta de peste 16 ani, 2 doze la o perioada de 21 de zile\n";
    cout<<'\n';
}

VaccinAntiSarsCov2::~ VaccinAntiSarsCov2()
{

}

VaccinAntiSarsCov2:: VaccinAntiSarsCov2():Vaccin()
{
    this->Eficienta = 0;
}

VaccinAntiSarsCov2::VaccinAntiSarsCov2(float pret, float tempDepozitare, const vector <string> &substante, const string producator, vector <string> reactiiAdverse, float Eficienta, vector <string> medicamenteContraindicate):Vaccin(pret, tempDepozitare, substante, producator)
{
    for (int i = 0; i < medicamenteContraindicate.size(); ++i)
        this->medicamenteContraindicate.push_back(medicamenteContraindicate[i]);
    for (int i = 0; i<reactiiAdverse.size(); ++i)
        this->reactiiAdverse.push_back(reactiiAdverse[i]);
    this->Eficienta = Eficienta;
}

VaccinAntiSarsCov2:: VaccinAntiSarsCov2(const  VaccinAntiSarsCov2& c):Vaccin(c)
{
    for (int i = 0; i < c.medicamenteContraindicate.size(); ++i)
        this->medicamenteContraindicate.push_back(c.medicamenteContraindicate[i]);
    for (int i = 0; i < c.reactiiAdverse.size(); ++i)
        this->reactiiAdverse.push_back(c.reactiiAdverse[i]);
    this->Eficienta = c.Eficienta;
}

VaccinAntiSarsCov2&  VaccinAntiSarsCov2::operator=(const  VaccinAntiSarsCov2& c)
{
    if (this!= &c)
    {
        Vaccin::operator=(c);
        for (int i = 0; i < c.medicamenteContraindicate.size(); ++i)
            this->medicamenteContraindicate.push_back(c.medicamenteContraindicate[i]);
        for (int i = 0; i < c.reactiiAdverse.size(); ++i)
            this->reactiiAdverse.push_back(c.reactiiAdverse[i]);
        this->Eficienta = c.Eficienta;
    }
    return *this;
}

istream&  VaccinAntiSarsCov2::read(istream& is)
{
    cout << "\tVaccin AntiSarsCov2\n";
    Vaccin::read(is);
    cout << "Numar reactii adverse:\n";
    int numar;
    is >> numar;
    char aux[100];
    is.get();
    cout << "Reactii adverse:\n";
    for (int i = 0; i < numar; ++i)
    {
        is.getline(aux,100);
        string s(aux);
        reactiiAdverse.push_back(s);
    }
    cout << "Numar medicamente contraindicate:\n";
    is >> numar;
    cout << "Medicamente contraindicate:\n";
    for (int i = 0; i < numar; ++i)
    {
        is >> aux;
        medicamenteContraindicate.push_back(aux);
    }
    cout << "Rata de eficienta:";
    is >> Eficienta;
    return is;
}

ostream&  VaccinAntiSarsCov2::print(ostream& os) const
{
    os<<"\tVaccin AntiSarsCov2\n";
    Vaccin::print(os);
    os<<"Reactii adverse:\n";
    for (int i = 0; i<reactiiAdverse.size(); ++i)
        os << reactiiAdverse[i] << '\n';
    for (int i = 0; i < medicamenteContraindicate.size(); ++i)
        os << medicamenteContraindicate[i] << '\n';
    os << "Rata de eficienta: " << Eficienta << "%\n";
    os << '\n';
    return os;
}




