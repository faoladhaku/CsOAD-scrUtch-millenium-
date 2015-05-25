#ifndef FUNCTIONS
#define FUNCTIONS
#include "math.h"
template<typename Operador1, typename Operador2, typename Respuesta>
class functions
{
private:
public:
Respuesta squart(Operador1);
Respuesta loga(Operador1);
Respuesta sen(Operador1);
Respuesta cose(Operador1);
Respuesta tang(Operador1);
Respuesta arcsen(Operador1);
Respuesta arccos(Operador1);
Respuesta arctan(Operador1);
Respuesta abso(Operador1);
Respuesta ln(Operador1);
Respuesta e_expo(Operador1);
Respuesta expo(Operador1);
Respuesta floors(Operador1);
Respuesta ceils(Operador1);
};

Respuesta functions::squart(Operador1)
{
  auto raiz = round(sqrt(Operador1));
  return raiz;
}

Respuesta functions::loga(Operador1)
{
 auto logaritmo = round(log10(Operador1));
 return logaritmo;
}

Respuesta functions::sen(Operador1)
{
  auto seno = round(sin(Operador1));
  return seno;
}

Respuesta functions::cose(Operador1)
{
  auto coseno = round(cos(Operador1));
  return coseno;
}

Respuesta functions::tang(Operador1)
{
  auto tangente = round(tan(Operador1));
  return tangente;
}

Respuesta functions::arcsen(Operador1)
{
 auto arcoseno = round(asin(Operador1));
 return arcoseno;
}

Respuesta functions::arccos(Operador1)
{
  auto arcocoseno = round(acos(Operador1));
  return arcocoseno;
}

Respuesta functions::arctan(Operador1)
{
  auto arcotangente = round(atan(Operador1));
  return arcotangente;
}

Respuesta functions::abso(Operador1)
{
  auto absoluto = round(abs(Operador1));
  return absoluto;
}

Respuesta functions::ln(Operador1)
{
  auto logaritmo = round(log(operador1));
  return logaritmo;
}

Respuesta functions::expo(Operador1)
{
  auto exponencial = round(pow(10,Operador1));
  return exponencial;
}
Respuesta functions::e_expo(Operador1)
{
  auto expoe = round(exp(Operador1));
  return expoe;
}
Respuesta functions::floors(Operador1)
{
  auto suelo = floor(Operador1);
  return suelo;
}
Respuesta functions::ceils(Operador1)
{
  auto techo = ceil(Operador1);
  return techo;
}

#endif // FUNCTIONS

