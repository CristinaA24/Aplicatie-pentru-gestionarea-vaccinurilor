
#include "Vaccin.h"
#include <vector>
using namespace std;


Vaccin::Vaccin(float pret, float tempDepozitare, const vector<string> &substante, const string producator) {
    this->pret = pret;
    this->tempDepozitare = tempDepozitare;
    this->substante = substante;
    this->producator = producator;


}

istream &operator>>(istream &is, Vaccin &Vaccin) {
    Vaccin.read(is);
    return is;
}

ostream &operator<<(ostream &os, const Vaccin &Vaccin) {
    Vaccin.print(os);
    return os;
}

istream &Vaccin::read(istream &is)  {
    cout << "pret:";
    is >> pret;

    cout << "temperatura depozitare:";
    is >> tempDepozitare;

    cout << "numar substante:";
    int substante;
    cin >> substante;

    for (int i = 0; i < substante; i++) {
        cout << "substanta " << i + 1 << " :";
        string tempSubstanta;
        cin >> tempSubstanta;
        substante.push_back(tempSubstanta);
    }

    cout << "numele producatorului:";
    is >> producator;

    return is;

}

ostream &Vaccin::print(ostream &os) const {
        os << "pret: " << pret << "\n";
        os << "temperatura depozitare: " << tempDepozitare << "\n";
        os << "substante: ";
        for (auto &substanta: substante) {
            os << substanta << " ";
        }
        cout << "\n";
        cout << "nume producator: " << producator << "\n";

    return os;
}


