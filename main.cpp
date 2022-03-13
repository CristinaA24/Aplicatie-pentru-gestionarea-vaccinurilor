#include <iostream>
#include "Vaccin.h"
#include "VaccinAntiGripal.h"
#include "VaccinAntiHepatita.h"
#include "VaccinAntiSarsCov2.h"
#include "Comanda.h"
#include "ListaComenzi.h"
#include <vector>
using namespace std;


int main() {
    VaccinAntiGripal a;
    VaccinAntiHepatita b;
    VaccinAntiSarsCov2 c;
    cin >> a >> b;
    cin >> c;
    cout << a << b;
    cout << c;
    Vaccin* list[3];
    list[0]=new VaccinAntiGripal();
    list[1]=new VaccinAntiHepatita();
    list[2]=new VaccinAntiSarsCov2();
    for(int i = 0; i < 3; i++)
        list[i]-> afisareSchemaVaccinare();
    vector <string> Vaccin;
    Vaccin.push_back("AntiSarsCov2");
    vector <int> cantitate;
    cantitate.push_back(20);
    Comanda com1("20-12-2020", "SpitalX", Vaccin, cantitate);
    cout << com1;
    ListaComenzi lista;
    lista = lista + com1;
    cout << lista[0];
    return 0;

}