
#ifndef VACCINANTIHEPATITA
#define VACCINANTIHEPATITA

#include "Vaccin.h"
#include <vector>
using namespace std;



class VaccinAntiHepatita : public Vaccin{
private:
    string tip;
    string Administrare;
public:
    VaccinAntiHepatita();
    VaccinAntiHepatita(float pret, float tempDepozitare, const vector <string> &substante, const string producator, string tip, string modAdministrare);
    VaccinAntiHepatita (const VaccinAntiHepatita& c);
    ~ VaccinAntiHepatita();

    void afisareSchemaVaccinare();

    VaccinAntiHepatita& operator= (const  VaccinAntiHepatita& c);
    virtual ostream& print(ostream& out)const;
    virtual istream& read(istream& in);


};


#endif VACCINANTIHEPATITA
