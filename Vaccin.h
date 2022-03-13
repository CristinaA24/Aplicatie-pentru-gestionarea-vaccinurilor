
#ifndef VACCIN
#define VACCIN

#include <iostream>
#include <vector>
using namespace std;



class Vaccin {
protected:
    float pret{};
    float tempDepozitare{};
    vector<string> substante;
    string producator;

public:
    Vaccin() = default;
    Vaccin(float pret, float tempDepozitare, const vector <string> &substante, const string producator);
    Vaccin (const Vaccin& ) = default;
    virtual ~Vaccin() = default;
    Vaccin& operator= (const Vaccin& ) = default;

    friend istream& operator>>(istream& is, Vaccin& Vaccin);
    friend ostream& operator<<(ostream& os,const Vaccin& Vaccin);

    virtual istream& read (istream& is);
    virtual ostream& print(ostream& os)const;


    virtual void afisareSchemaVaccinare()=0;


};








#endif VACCIN
