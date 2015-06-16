#ifndef CADENA
#define CADENA

#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


template<typename Ent>;
template<typename Car>;

class cadenas
{
private:
    Car palabra;
    vector<Car> cadena;
public:
    cadenas();
    Car concatenar(Car*);
    Ent tamano();
    void mostrar(Ent);

};
cadenas::cadenas()
{
    cin>>palabra;
    cadena.push_back(palabra)
}

Car cadenas::concatenar(Char *cad )
{
    cadena.push_back(cad);
    return cadena;
}

Ent cadenas::tamano()
{
    Ent aux;
    aux=cadena.size();
    return aux;
}

void cadenas::mostrar(Ent lugar)
{
    cout<<cadena[lugar];
}

#endif // CADENA

