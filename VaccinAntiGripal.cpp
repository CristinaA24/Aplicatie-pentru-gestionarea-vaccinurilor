
#include "VaccinAntiGripal.h"
#include <vector>

void VaccinAntiGripal::afisareSchemaVaccinare()
{
    cout<<"\tVaccin Antigripal:\n";
    cout<<"Adulti: o doza de 0.5 ml\n";
    cout<<"Copii si adolescenti: o doza de 0.3ml\n";
    cout<<"Se repeta din 2 in 2 ani\n";
    cout<<'\n';
}

VaccinAntiGripal::VaccinAntiGripal():Vaccin()
{
    this->tulpina = "-";
    this->respectaRecomandari = 0;
}

VaccinAntiGripal::VaccinAntiGripal(float pret, float tempDepozitare, const vector <string> &substante, const string producator, string tulpina, bool respecta_recomandari) : Vaccin(pret, tempDepozitare, substante, producator)
{
    this->tulpina = tulpina;
    this->respectaRecomandari = respectaRecomandari;
}

VaccinAntiGripal::VaccinAntiGripal(const VaccinAntiGripal& c):Vaccin(c)
{
    this->tulpina=c.tulpina;
    this->respectaRecomandari=c.respectaRecomandari;
}

VaccinAntiGripal& VaccinAntiGripal :: operator=(const VaccinAntiGripal& c)
{
    if (this!=&c)
    {
        Vaccin::operator=(c);
        this->tulpina=c.tulpina;
        this->respectaRecomandari=c.respectaRecomandari;
    }
    return *this;
}

istream& VaccinAntiGripal::read(istream& is)
{
    cout<<"\tVaccin Anti Gripal\n";
    Vaccin::read(is);
    cout<<"Tulpina pentru care este vaccinul: ";
    is>>tulpina;
    cout<<"Respecta recomandarile? (1/0): ";
    is>>respectaRecomandari;
    return is;
}

ostream& VaccinAntiGripal::print(ostream& os) const
{
    os<<"\tVaccin Anti Gripal\n";
    Vaccin::print(os);
    os<<"Tulpina pentru care este vaccinul: ";
    os<<tulpina<<'\n';
    cout<<"Respecta recomandarile? (1/0): ";
    os<<respectaRecomandari<<'\n';
    os<<'\n';
    return os;
}

VaccinAntiGripal::~VaccinAntiGripal()
{

}