
#ifndef VACCINANTISARSCOV2
#define VACCINANTISARSCOV2

#include "Vaccin.h"
#include <vector>
using namespace std;



class VaccinAntiSarsCov2 : public Vaccin {
private:
    vector <string> reactiiAdverse;
    float Eficienta;
    vector <string> medicamenteContraindicate;
public:
    VaccinAntiSarsCov2();
    VaccinAntiSarsCov2(float pret, float tempDepozitare, const vector <string> &substante, const string producator,
            vector <string> reactii_adverse, float rata_eficienta, vector <string> medicamente_contraindicate);
    VaccinAntiSarsCov2 (const  VaccinAntiSarsCov2& c);
    ~ VaccinAntiSarsCov2();

    void afisareSchemaVaccinare();

    VaccinAntiSarsCov2& operator= (const  VaccinAntiSarsCov2& c);
    virtual ostream& print(ostream& os)const;
    virtual istream& read(istream& is);


};


#endif VACCINANTISARSCOV2
