
#include "ListaComenzi.h"
#include <vector>
#include "Comanda.h"
using namespace std;


ListaComenzi& ListaComenzi::operator=(const ListaComenzi& c)
{
    if (this!= &c)
    {
        for (int i = 0; i < c.comenzi.size(); ++i)
            this->comenzi.push_back(c.comenzi[i]);
    }
    return *this;
}
ListaComenzi operator+ (ListaComenzi com, const Comanda& c)
{
    com.comenzi.push_back(c);
    return com;
}

ListaComenzi::ListaComenzi()
{

}

Comanda ListaComenzi::operator[](int index)
{
    if (0 <= index && index<this->comenzi.size())
        return comenzi[index];
    else
    {
        Comanda c;
        cout<<"Index gresit!\n";
        return c;
    }
}