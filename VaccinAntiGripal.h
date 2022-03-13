
#ifndef VACCINANTIGRIPAL
#define VACCINANTIGRIPAL

#include "Vaccin.h"
#include <vector>


class VaccinAntiGripal : public Vaccin{
private:
    string tulpina;
    bool respectaRecomandari{};

public:
    VaccinAntiGripal() ;
    VaccinAntiGripal(float pret, float tempDepozitare, const vector <string> &substante, const string producator, string tulpina, bool respectaRecomandari);
    VaccinAntiGripal (const VaccinAntiGripal& c);
    ~VaccinAntiGripal();

    void afisareSchemaVaccinare();

    VaccinAntiGripal& operator= (const VaccinAntiGripal& c);
    virtual ostream& print(ostream& os) const;
    virtual istream& read (istream& is);


};


#endif VACCINANTIGRIPAL
