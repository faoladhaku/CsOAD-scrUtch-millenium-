#ifndef CADENA
#define CADENA

#include <cstring>
#include <iostream>
using namespace std;

typedef int E;
typedef char C;

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
}

#endif // CADENA

