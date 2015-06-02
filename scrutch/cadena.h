#ifndef CADENA
#define CADENA

#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


typename int Ent;
typename char Car;

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



/*
class cadena
{
private:
    C *cad;
    E tamano;

public:
    cadena (C *,E);
    void caracter(E);
    void mostrar();
    E longitud();
    cadena concatenar(cadena);

};


cadena::cadena(C* x,E y)
{
    tamano=y;
    cad=new C[tamano];
    strcpy(cad,x);
}

void cadena::caracter (E x)
{
    E aux=strlen(cad);
    if (x>aux)
        cout<<"";
    cout<<(*(cad+x-1));
}

void cadena::mostrar()
{
   cout<<cad<<endl;
}

E cadena::longitud()
{
    E aux=strlen(cad);
    return aux;
}

cadena cadena::concatenar(cadena y)
{
    C *nueva=strcat(cad,y.cad);
    cadena w(nueva,20);
    return w;
*/

#endif // CADENA

