#ifndef CADENA
#define CADENA

#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <template_names.h>

using namespace std;

class cadenas
{
private:
    caracter palabra;
    vector<caracter> cadena;
public:
    cadenas();
    caracter concatenar(caracter*);
    entero tamano();
    void mostrar(entero);

};
cadenas::cadenas()
{
    cin>>palabra;
    cadena.push_back(palabra)
}

caracter cadenas::concatenar(caracter *cad )
{
    cadena.push_back(cad);
    return cadena;
}

entero cadenas::tamano()
{
    auto aux;
    aux=cadena.size();
    return aux;
}

void cadenas::mostrar(entero lugar)
{
    cout<<cadena[lugar];
}

#endif // CADENA
